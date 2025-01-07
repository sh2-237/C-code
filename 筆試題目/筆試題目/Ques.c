#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>

// 數組名是首元素地址
// 兩個例外
// 1. sizeof(數組名)
// 2. &數組名


//在X86环境下
//假設結構體的⼤⼩是20个字节
//程序輸出的结果是啥？
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p = (struct Test*)0x100000;



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
	
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr)); // 隨機值
	//printf("%d\n", strlen(arr + 0)); // 隨機值
	////printf("%d\n", strlen(*arr)); 
	//// arr是數組名錶是首元素地址 
	//// *arr 是首元素 -- 'a' -- 97 
	//// 將97傳遞給strlen，strlen會認為97是地址就開始訪問
	//// err
	////printf("%d\n", strlen(arr[1])); // 同上
	//printf("%d\n", strlen(&arr)); // 隨機值
	//printf("%d\n", strlen(&arr + 1)); // 隨機值
	//printf("%d\n", strlen(&arr[0] + 1)); // 隨機值

	//char arr[] = "abcdef";
	//printf("%zd\n", sizeof(arr)); // 7
	//printf("%zd\n", sizeof(arr + 0)); // 4 or 8
	//printf("%zd\n", sizeof(*arr)); // 1
	//printf("%zd\n", sizeof(arr[1])); // 1
	//printf("%zd\n", sizeof(&arr)); // 4 or 8
	//printf("%zd\n", sizeof(&arr + 1)); // 4 or 8
	//printf("%zd\n", sizeof(&arr[0] + 1)); // 4 or 8

	//printf("========================================");

	//printf("%d\n", strlen(arr)); // 6
	//printf("%d\n", strlen(arr + 0)); // 6
	////printf("%d\n", strlen(*arr)); 
	//// 在 C 中，字元型 (char) 與整數型之間可以自動轉換。當 %d 被用於格式化 *arr 時，字元 'a' 被轉換為其 ASCII 值 97
	//// 這裡傳遞的是 a 也就是 97 的地址 會導致程序崩潰
	////printf("%d\n", strlen(arr[1])); 
	//printf("%d\n", strlen(&arr)); // 6
	//printf("%d\n", strlen(&arr + 1)); // 隨機值
	//printf("%d\n", strlen(&arr[0] + 1)); // 5

	//printf("========================================");

	//char* p = "abcdef";
	//printf("%d\n", sizeof(p)); // 4 or 8
	//printf("%d\n", sizeof(p + 1)); // 4 or 8
	//printf("%d\n", sizeof(*p)); // 1
	//printf("%d\n", sizeof(p[0])); // 1
	//printf("%d\n", sizeof(&p)); // 4 or 8
	//printf("%d\n", sizeof(&p + 1)); // 4 or 8
	//printf("%d\n", sizeof(&p[0] + 1)); // 4 or 8


	//printf("%d\n", strlen(p)); // 6
	//printf("%d\n", strlen(p + 1)); // 5
	////printf("%d\n", strlen(*p)); // 崩
	////printf("%d\n", strlen(p[0])); // 崩
	//printf("%d\n", strlen(&p)); // 6
	//printf("%d\n", strlen(&p + 1)); // 隨機值
	//printf("%d\n", strlen(&p[0] + 1)); // 5

#pragma endregion

#pragma region 二維數組
	//int a[3][4] = { 0 };
	//// a本身是一個指向整個數組的指標 (其類型為 int (*) [4]
	//printf("%d\n", sizeof(a)); // 48
	//printf("%d\n", sizeof(a[0][0])); // 4 
	//printf("%d\n", sizeof(a[0]));  // 16
	//printf("%d\n", sizeof(a[0] + 1));  // 4 or 8
	//printf("%d\n", sizeof(*(a[0] + 1)));  // 4
	//printf("%d\n", sizeof(a + 1));  // 4 or 8
	//// a是二維數組的數組名，沒有單獨放在sizeof中， a表示首元素地址 -- 也就是第一行的地址
	//// 所以 a + 1 其實代表的是第二行的地址
	//printf("%d\n", sizeof(*(a + 1)));  // 16
	///*
	//*(a + 1) 的類型是 int[4]。
	//對於一個陣列，sizeof 會計算的數組整體大小，而不是指標的大小
	//sizeof(int[4]) = 4 × sizeof(int)
	//*/
	//printf("%d\n", sizeof(&a[0] + 1));  // 4 or 8
	//printf("%d\n", sizeof(*(&a[0] + 1)));  // 16
	//printf("%d\n", sizeof(*a)); // 16
	//printf("%d\n", sizeof(a[3]));  // 16
#pragma endregion

#pragma region 指標

	//int a[5] = { 1, 2, 3, 4, 5 };
	//int* ptr = (int*)(&a + 1);
	//printf("%d,%d", *(a + 1), *(ptr - 1)); // 2,5

	// 指標+1 和類型有關係

	//printf("%p\n", p + 0x1); // 0x100014
	//printf("%p\n", (unsigned long)p + 0x1); // 整數+1 就是 +1 所以是 0x100001
	//printf("%p\n", (unsigned int*)p + 0x1); // 0x100004
	

	//int a[3][2] = { (0, 1), (2, 3), (4, 5) }; //這是中括號 是逗號表達式!
	//int* p;
	//p = a[0]; // p指向的地址是第一列的地址
	//printf("%d", p[0]); // 1

	//int a[5][5];

	//int(*p)[4];
	//p = a;
	//printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); // 地址-地址 = 指標-指標 = 兩個地址之間元素的個數

	//int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int* ptr1 = (int*)(&aa + 1);
	//int* ptr2 = (int*)(*(aa + 1));
	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	
	//char* a[] = { "work","at","alibaba" };
	//char** pa = a;
	//pa++;
	//printf("%s\n", *pa);

	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
#pragma endregion


	return 0;
}