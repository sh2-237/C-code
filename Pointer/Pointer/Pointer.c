#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include <string.h>
//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };	
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//
//	//int* p = &arr[0];
//	//for (int i = 0; i < sz; i++) {
//	//	printf("%d ", *(p+i));
//	//}
//	
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr);
//
//
//
//	return 0;
//}	

//int main() {
//    int a = 1, b = 2, c = 3, d = 4, e = 5;
//    int* Int[5] = { &a,&b,&c,&d,&e }; // 這是一個整型指標數組
//    // 字符串在C語言中是字符數組，所以一個字符串相當於一個字符數組，字符串本身就等於字符數組的指標（首位址）
//    const char* String[] = { "Test1","Test2","Test3","Test4","Test5" }; // 這是一個字符類型的指標數組
//    for (int i = 0; i < 5; ++i) {
//        printf("%p\n", String[i]); // 輸出的是的地址
//    }
//    return 0;
//}

#pragma region Bubble Sort

//void Input(int* arr, int sz) {
//	for (int i = 0; i < sz; i++) {
//		scanf("%d", &arr[i]);
//	}
//}
//
//void Bubble_Sort(int* arr, int sz) {
//	for (int i = 0; i < sz ; i++) {
//		int flag = 1; //假設第i輪是有序的
//		int temp = arr[0];
//		// 為何是sz-i 因為第i輪就已經可以保證最後面的i個數字是排好的
//		for (int j = i + 1; j < sz ; j++) {
//			if (arr[i] > arr[j]) {
//				flag = 0; // 交換了代表是無序的
//				temp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = temp;
//			}
//		}
//	}
//}
//
//
//void Print(int* arr, int sz) {
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main() {
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Input(arr, sz);
//
//	printf("排序前，數組中的值為:");
//	Print(arr, sz);
//	printf("\n");
//
//	Bubble_Sort(arr, sz);
//
//	printf("排序後，數組中的值為:");
//	Print(arr, sz);
//	printf("\n");
//
//	return 0;
//}

#pragma endregion

#pragma region 指標數組

//int main() {
//	
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { arr1,arr2,arr3 };
//	
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main() {
//
//	const char* p = "abcdef";
//	printf("%c\n", *p);
//	printf("%s\n", p); //打印字符串的時候，只需要提供首字符的地址就行
//
//	return 0;
//}

#pragma endregion

#pragma region 數組指標
//int main() {
//
//	char* ch[5];
//
//	char* (*pc)[5] = &ch;
//
//
//	return 0;
//}
#pragma endregion

#pragma region 二維數組傳參本質

//void Print(int (*arr)[5], int r, int c) {
//	int i = 0;
//	for (i = 0; i < r; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d ", *(*(arr + i) + j));
//		}
//		// 因為arr的類型是 int (*)[5} 是一個指標 所以 *(arr+i)的結果會是一個地址
//		printf("\n");
//	}
//}
//
//int main() {
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	Print(arr, 3, 5);
//	return 0;
//}
#pragma endregion

// 兩個整數二進制位不同個數

//int main() {
//
//	int m, n;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//
//	while (m || n) {
//		if (m % 2 != n % 2) {
//			count++;
//		}
//		m /= 2;
//		n /= 2;
//	}
//
//	printf("%d", count);
//	return 0;
//}

#pragma region 函數指標變量

//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//
//	int (*pf)(int, int) = &Add;
//
//
//	return 0;
//}
#pragma endregion

#pragma region 單身狗
//void Single_Dog(int* arr, int sz) {
//	for (int i = 0; i < sz; i++) {
//		int flag = 1;
//		for (int j = 0; j < sz; j++) {
//			if (arr[i] == arr[j] && i != j) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag) {
//			printf("%d\n", arr[i]);
//		}
//	}
//}
//int main() {
//
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Single_Dog(arr, sz);
//	return 0;
//}

#pragma endregion

#pragma region 不創建臨時變量交換兩個變量整數內容
//int main() {
//
//	int a = 10;
//	int b = 20;
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}
#pragma endregion

// 打印二進制的奇數位和偶數位

//void Printbit(int num)
//{
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//int main() {
//
//	int n;
//	scanf("%d", &n);
//	
//	Printbit(n);
//	return 0;
//}

#pragma region 字符串逆序輸出
//int main() {
//	char ch[10000];
//	gets(ch); // C中要獲取帶空格字串 可以使用gets
//	printf("%d\n", strlen(ch));
//
//	for (int i = strlen(ch) - 1; i >= 0; i--) { // -1 是因為下標是從0開始
//		printf("%c", ch[i]);
//	}
//
//
//
//	return 0;
//}
#pragma endregion

#pragma region 字符串左旋

//int main() {
//
//	char ch[] = "ABCD";
//
//	int k = 0;
//	
//	scanf("%d", &k);
//		
//	for (int i = k; i < strlen(ch) + 1 ; i++) {
//		if (ch[i] != '\0') {
//			printf("%c", ch[i]);
//		}
//		if (ch[i] == '\0') {
//			for (int j = 0; j < k; j++) {
//				printf("%c", ch[j]);
//			}
//		}
//	}
//
//	return 0;
//}

#pragma endregion

// 模擬 strlen()

//int count_len(char* ch,int sz) {
//	int count = 0;
//	for (int i = 0; i < sz; i++) {
//		if (ch[i] == '\0') {
//			break;
//		}
//		else {
//			count++;
//		}
//	}
//	return count;
//	
//}
//
//int main() {
//
//	char ch[200];
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	gets(ch);
//	int ret = count_len(ch,sz);
//	printf("%s的長度為%d", ch, ret);
//
//	return 0;
//}

// 調整奇數偶數順序
//void swap_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//
//	while (left < right)
//	{
//		// 从前往后，找到一个偶数，找到后停止
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//
//		// 从后往前找，找一个奇数，找到后停止
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//
//		// 如果偶数和奇数都找到，交换这两个数据的位置
//		// 然后继续找，直到两个指针相遇
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main() {
//
//	int before[] = { 1,2,3,4,5,6,7,8 };
//	int sz = sizeof(before) / sizeof(before[0]);
//	printf("調整前:");
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", before[i]);
//	}
//	printf("\n");
//
//	printf("調整後:");
//	swap_arr(before, sz);
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", before[i]);
//	}
//
//	return 0;
//}

#pragma region qsort

//void qsort(void* base, // base -- 指向待排序數組的第一個元素的指標
//	size_t num, // base指向數組中的元素個數
//	size_t size,  // base指向的數組中一個元素的大小，單位為字節
//	int(*cmp)(const void*, const void*) //函數指標 
//	);

// 字符串比較大小不能使用 > >= <= == !=
// 字符串比較要使用strcmp

// 對函數的返回值有要求
// p1指向的值
//int cmp_int(const void* p1, const void* p2) {
//	if (*(int*)p1 > *(int*)p2) { //強轉成我們要比較的數據類型
//		return 1;
//	}
//	else if (*(int*)p1 < *(int*)p2) {
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}
//
//void print_arr(int* arr, int sz) {
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void test1() {
//	int arr[] = { 3,1,7,9,4,2,6,5,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//struct Stu {
//	char name[20];
//	int age;
//
//};
////測試qsort 函數排序結構體數據
//// 按照名字比較兩個結構體數據
//int cmp_stu_by_name(const void*p1,const void*p2) {
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p1)->name);
//}
//void test2() {
//	struct Stu arr[] = { {"zhangsan",20},{"lisi",35},{"wangwu",18} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//int main() {
//
//	// qsort這個函數可以對任意數據類型進行排序
//
//	//test1();
//
//	test2();
//
//	return 0;
//}
#pragma endregion



int cmp_int(const void* p1, const void* p2) {
    return *((int*)p1) - *((int*)p2);
}

void Swap(char* buf1, char* buf2, size_t width) {
    char tmp = 0;
    for (int i = 0; i < width; i++) {
        tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;

        buf1++;
        buf2++;
    }
}

void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void* p1, const void* p2)) {
    for (int i = 0; i < sz; i++) {
        for (int j = 0; j < sz - 1 - i; j++) {
            char* current = (char*)base + j * width;
            char* next = (char*)base + (j + 1) * width;
            if (cmp(current, next) > 0) {
                Swap(current, next, width);
            }
        }
    }
}

void print_int(int* arr, size_t sz) {
    for (int i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void test4() {
    int arr[] = { 2, 3, 5, 6, 8, 3, 2, 5, 7 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
    print_int(arr, sz);
}

int main() {
    test4();
    return 0;
}
