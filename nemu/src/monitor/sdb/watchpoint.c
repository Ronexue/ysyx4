/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;        //the number of the monitoring point
  struct watchpoint *next;          //the next monitoring point
  char expr[512];
  uint64_t result;    
} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;      // head:monitoring point in use,free:monitoring point in idle

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp() {//EXPR是输出表达式，类型为char
	assert(free_ != NULL);
	WP *tmp = free_;
	free_ = free_ -> next;
	tmp -> next = head;
	head = tmp;
	return tmp;
}

void free_wp(WP* wp){
	if (head == wp) {
		WP *tmp = head;
		head = head -> next;
		tmp -> next = free_;
		free_ = tmp;
	} else {
		WP *pt = head;
		while (pt != NULL && pt -> next != wp) {
			pt = pt -> next;
		}
		// Cannot find wp.
		if (pt == NULL) {
			printf("No watchpoints number %d.\n", wp -> NO);
			return;
		}
		WP *tmp = pt -> next;
		pt -> next = tmp -> next;
		tmp -> next = free_;
		memset(tmp -> expr, 0, sizeof(tmp -> expr));
		free_ = tmp;
	}
}

void watchpoints_add(char *e) {
	bool success = true;
	/* calculate expression */
	uint64_t ret = expr(e, &success);
	/* check if argument has errors */
	if (success) {
		WP *pt = new_wp();
		/* store expression */
		memcpy(pt -> expr, e, strlen(e));
		/* store result */
		pt -> result = ret;
	} else {
		printf("%s: Syntax error.\n", e);
	}
}

void watchpoints_del(int id) {
	WP *pt = head;
	while (pt != NULL) {
		if (pt -> NO != id) {
			pt = pt -> next;
		} else {
			free_wp(pt);
			return;
		}
	}
	// Cannot find wp.
	printf("No watchpoints number %d.\n", id);
}

void watchpoints_display() {
	WP *pt = head;
	if (pt == NULL) {
		printf("No watchpoints.\n");
	} else {
		printf("Watchpoints List\n");
		while (pt != NULL) {
			printf("No %d: %s\n", pt -> NO, pt -> expr);
			pt = pt -> next;
		}
	}
}

bool watchpoints_check() {
	WP *pt = head;
	bool is_changed = false;
	while (pt != NULL) {
		bool success = true;
		uint64_t now = expr(pt -> expr, &success);
		assert(success);
		/* expression's result changed, output the result */
		if (now != pt -> result) {
			is_changed = true;
			printf("Watchpoint %d: %s\n\n", pt -> NO, pt -> expr);
			printf("Old value = %lx\n", pt -> result);
			printf("New value = %lx\n\n", now);
			pt -> result = now;
		}
		pt = pt -> next;
	}
	return is_changed;
}
