#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {           //calculate the length of a string
  assert(s!=NULL);
  size_t len=0;
  while(s[len]!='\0') len++;
  return len;
}

char *strcpy(char *dst, const char *src) {              //copy a string
  size_t i;
  for (i = 0; src[i] != '\0'; i++) {
    dst[i] = src[i];
  }
  dst[i] = src[i];
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t i;
  for (i = 0; i < n && src[i] != '\0'; i++) {
    dst[i] = src[i];
  }
  for ( ; i < n; i++) {
    dst[i] = '\0';
  }
  return dst;
}

char *strcat(char *dst, const char *src) {            //concatenate two strings
  size_t dst_len = strlen(dst);
  size_t i;
  for (i = 0 ; src[i] != '\0' ; i++){
    dst[dst_len + i] = src[i];
  }
  dst[dst_len + i] = '\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {         //compare two strings
  size_t i;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
		if (s1[i] != s2[i]) return s1[i] - s2[i];
	}
	return s1[i] - s2[i];
}

int strncmp(const char *s1, const char *s2, size_t n) {
  size_t i;
	for (i = 0; i < n && s1[i] != '\0' && s2[i] != '\0'; i++) {
		if (s1[i] != s2[i]) return s1[i] - s2[i];
	}
	if (i == n) return 0;
	return s1[i] - s2[i];
}

void *memset(void *s, int c, size_t n) {               //fill memory with a constant byte
	char *ps = s;
	while (n-->0)
	{
		*ps++ = c;               //*ps = c; ps++;
	}
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {          //copies n bytes from memory area src to memory area dest
  char *pdst = dst;
	const char *psrc = src;
	if (dst < src) {              //正常情况下从前向后拷贝
		while (n--) {
			*pdst++ = *psrc++;
		}
	} 
  else {               //当出现内存覆盖时从后向前拷贝
		while (n--) {
			*(pdst + n) = *(psrc + n);
		}
	}
	return dst;
}

void *memcpy(void *out, const void *in, size_t n) {          //copy memory area
  char *ptrd = out;
	const char *ptrs = in;
	while (n--) {
		*ptrd++ = *ptrs++;
	}
	return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *ptra = s1, *ptrb = s2;
	int ret;
	while (n--) {
		ret = *ptra - *ptrb;
	  if (ret != 0) return ret;
	}
	return 0;
}

#endif
