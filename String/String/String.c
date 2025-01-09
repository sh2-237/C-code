#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>
#include <assert.h>
#include <string.h>

#pragma region strlen()��{

// 1. �p�ƾ��覡

//size_t my_strlen(const char* str) {
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}

// 2. ���Ф覡

//size_t my_strlen(const char* str) {
//	char* start = str;
//	assert(start != NULL);
//	while (*str != '\0') {
//		str++;
//	}
//	return str - start;
//}

// 3. ���j

//size_t my_strlen(char* str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	else {
//		return 1 + my_strlen(str + 1);
//	}
//}

#pragma endregion

#pragma region strcpy()��{

char* my_strcpy (char* dest, const char* sour) {

	char* ret = dest;
	while (*dest++ = *sour) {
		;
	}
	return ret;
}

#pragma endregion


#pragma region strcat()��{
char* my_strcat(char* dest, const char* sour) {
	assert(dest && sour);
	
	char* ret = dest;
	
	while (*dest != '\0') {
		dest++;
	}

	while (*dest++ = *sour++) {
		;
	}
	return ret;
}
#pragma endregion

#pragma region strcmp()��{

// �r�Ŧ����O���������m���j�p

int my_strcmp(char* str1, char* str2) {
	
	while (*str1 == *str2) {
		if (*str1 == '\0') {

			return 0;
		}
		str1++;
		str2++;
	}
	return (*str1 - *str2);

}

#pragma endregion

#pragma region strstr()��{

char* my_strstr(const char* str1, const char* str2) {

	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cur = str1;

	while (*cur ) { // *cur != '\0'
		s1 = cur;
		s2 = str2;

		//�S���p -- str2���V���O�Ŧr�Ŧ�A������^str1

		if (*str2 == '\0') {
			return str1;
		}

		while (*s1  && *s2  &&  * s1 == *s2) {
			s1++;
			s2++;
		}
		if (*s2 == '\0') {
			return cur;
		}
		cur++;
	}
}

#pragma endregion


int main() {

#pragma region strtok

	//char arr[] = "cmx@yeah.net";
	//char buf[256] = { 0 };
	//strcpy(buf, arr);
	//char* sep = "@.";
	//char* ret = NULL;

	//for (ret = strtok(buf, sep); ret != NULL; ret = strtok(NULL, sep)) {
	//	printf("%s\n", ret);
	//}


#pragma endregion

	char arr[] = "abcdefabcdef";
	char* p = "cdef";
	const char* ret = my_strstr(arr, p);

	if (ret == NULL) {
		printf("���s�b\n");
	}
	else {
		printf("%s\n", ret);
	}

	return 0;
}