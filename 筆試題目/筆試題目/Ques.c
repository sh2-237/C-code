#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>

// 數組名是首元素地址
// 兩個例外
// 1. sizeof(數組名)
// 2. &數組名

int main() {

#pragma region 數組筆試題
	//int a[] = { 1,2,3,4 };
	//printf("%zd\n", sizeof(a)); // 16
	//// 數組名a單獨放在sizeof內部，a表示整個數組，計算的是整個數組大小
	//printf("%zd\n", sizeof(a + 0)); // 4 or 8 
	//// 這裡的a是數組名表示首元素地址
	//printf("%zd\n", sizeof(*a)); // 4
	//// 這裡的a是首元素地址 
	//printf("%zd\n", sizeof(a + 1)); // 4 or 8
	//// 這裡的a是首元素地址  (a+1)就是第二個元素的地址
	//printf("%zd\n", sizeof(a[1])); // 4
	//printf("%zd\n", sizeof(&a));  //
	//// &a -- 這裡的數組名表示整格數組， &a是整個數組的地址
	//// 數組的地址也是地址 所以是 4 or 8
	//printf("%zd\n", sizeof(*&a)); // 16
	//// 1.這裡的*和&抵銷了 所以等價於 sizeof(a)
	//// 2, &a是數組的地址，類型是 int(*)[4] 
	//printf("%zd\n", sizeof(&a + 1)); // 4 or 8
	//printf("%zd\n", sizeof(&a[0]));  // 4 or 8
	//printf("%zd\n", sizeof(&a[0] + 1));  // 4 or 8
#pragma endregion

#pragma region 字符數組
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr)); // 6
	//printf("%d\n", sizeof(arr + 0)); // 4 or 8
	//printf("%d\n", sizeof(*arr)); // 1
	//printf("%d\n", sizeof(arr[1])); // 1
	//printf("%d\n", sizeof(&arr)); // 4 or 8
	//printf("%d\n", sizeof(&arr + 1)); // 4 or 8
	//printf("%d\n", sizeof(&arr[0] + 1)); // 4 or 8

	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr)); // 隨機值
	printf("%d\n", strlen(arr + 0)); // 隨機值
	//printf("%d\n", strlen(*arr)); 
	// arr是數組名錶是首元素地址 
	// *arr 是首元素 -- 'a' -- 97 
	// 將97傳遞給strlen，strlen會認為97是地址就開始訪問
	// err
	//printf("%d\n", strlen(arr[1])); // 同上
	printf("%d\n", strlen(&arr)); // 隨機值
	printf("%d\n", strlen(&arr + 1)); // 隨機值
	printf("%d\n", strlen(&arr[0] + 1)); // 隨機值
#pragma endregion


	return 0;
}