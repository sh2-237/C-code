#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>
#include <stddef.h>
#pragma region 第一次寫的結構
// 學生類型

//struct Student {
//	char name[20];
//	int age;
//	float score;
//};
//
//struct Student s3; //s3是全局變量
#pragma endregion

struct S1 {
	char c1;
	char c2;
	int n;
};

struct S2 {
	char c1;
	int n;
	char c2;
};

struct S3 {
	double d;
	char c;
	int i;

	// 8bytes 8(默認對齊數)  (最小值) 8
	// 0 - 7 (存放位置)
	// 1 8 1
	// 8
	// 4 8 4
	// 9 - 12
	// Max(8,1,4) = 8 -- 結構大小必須要是8的整數倍
	// sizeof(struct S3) == 16
};

struct S4 {
	char c1; // 1 8 -- 1 --- 0
	struct S3 s3; 
	// 嵌套的結構體成員對齊到⾃⼰的成員中最⼤對齊數的整數倍
	// 也就是8 所以要對齊偏移量8的位置處開始 s3大小 -- 16
	// 8 - 23
	double d; // 8 8 -- 8 -- 24~31
	// max(1,16,8) = 16 
	// 32
};

// 位段
struct S {
	int _a;
	int _b;
	int _c;
	int _d;
};

enum Sex {
	// 該枚舉類型的三個可能值
	// 他們都是常量 -- 稱作枚舉常量
	MALE,
	FEMALE,
	SECRET
};
int main() {


//printf("%zd\n", sizeof(struct S4));
	////printf("%zd\n", sizeof(struct S2));
	//struct S1 s1 = { 0 };

/*	printf("%zd\n", offsetof(struct S2, c1));
	printf("%zd\n", offsetof(struct S2, n));
	printf("%zd\n", offsetof(struct S2, c2))*/;

	int i = 0;
	while (i < 10) {
		if (i < 1)
			continue;
		if (i == 5)
			break;
		i++;
	}	

	return 0;
}