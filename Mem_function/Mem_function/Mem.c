#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include <assert.h>
#include <string.h>
void* my_memcpy(void* dest, const void* src, size_t num) {
	assert(dest && src);
	void* ret = dest;
	for (int i = 0; i < num; i++) {
		*(char*)dest = *(char*)src; 
	// ���ҥH�j���ഫ��(char*) �O�]��num�O�r�`�ơA�ϥ�char*�����O�̦X�A��
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

void* my_memmove(void* dest, const void* src, size_t num) {
	void* ret = dest;
	assert(dest && src);
	if (dest < src) { // �e -> �����
		while (num--) {
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else {
		while (num--) {
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
int main() {
#pragma region Memcpy

	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };

	//�Narr1����3 4 5 6 7 ������arr2��
	//my_memcpy(arr1+2, arr1, 20);
	my_memmove(arr1 + 2, arr1, 20);
	for (int i = 0; i < 20; i++) {
		printf("%d ", arr1[i]);
	}
#pragma endregion



	return 0;
}