#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>
#include <assert.h>

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




int main() {

	


	return 0;
}