
#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>
#include <string.h>

// 模擬實現strstr
char* my_strstr(char* str1, char* str2) {
	// 目標 : 在str1中找是否存在str2

	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = str1;
	
	while (*cur) { // 即 *cur !='\0'
		s1 = cur;
		s2 = str2;
		if (*s2 == '\0') {
			return str1;
		}
		
		while (*s1 && *s2 && *s1 == *s2) {
			s1++;
			s2++;
		}
		if (*s2 == '\0') {
			return cur;
		}
		cur++;

	}
}

// 模擬實現strncpy
char* my_strncpy(char* dest, const char* src, size_t n) {
	int i = 0;
	while (i < n && *src) {
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	if (i < n) {
		*dest = 0;
	}
	return dest;
}

// 模擬實現strncat

char* my_strncat(char* dest, char* src, size_t num) {
	int i = 0;
	while (*dest != '\0') {
		dest++;
	}
	while (*src && i < num) {
		*dest++ = *src++;
		i++;
	}
	return dest;
}
int main() {

	// strstr example
	
	//char str1[] = "This is a simple string";
	//char* pch = my_strstr(str1, "simple");
	//if (pch != NULL) {
	//	strncpy(pch, "sample", 6);
	//}
	//puts(str1);
	
	// strncat example

	//char str1[] = "Hello World";
	//my_strncpy(str1, "Ei", 1);
	//puts(str1);
	
	char str1[30] = "Hello World";
	my_strncat(str1, " Hi!", 4);

	puts(str1);


	return 0;
}