#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//int main() {
//	
//	// 動態記憶體配置
//	
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL) {
//		perror("malloc");
//		return 1;
//	}
//	int* p2 = (int*)calloc(10, sizeof(int));
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", *(p2 + i));
//	}
//	
//	free(p);
//	free(p2);
//
//	return 0;
//}


//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}


void Test(void)
{
	char* str = (char*)malloc(100);		
	strcpy(str, "hello");
	free(str);
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main() {

	Test();



	return 0;
}