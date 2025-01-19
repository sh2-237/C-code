#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>

#pragma region 枚舉的使用案例
void menu() {
	printf("******* 請輸入您要執行的功能 *******\n");
	printf("******* 1. add     2. sub    *******\n");
	printf("******* 3. mul     4. div    *******\n");
	printf("******* 輸入0表示退出使用    *******\n");
}

enum Option {
	EXIT, // 0
	ADD, // 1
	SUB, // 2
	MUL, // 3
	DIV // 4
};
#pragma endregion

struct S {
	char name;
	int number;
};
union u {
	char c;
	int i;
};
int main() {

	#pragma region 枚舉案例實現
	//menu();
//int input;
//printf("請輸入您的選擇:");
//scanf("%d", &input);
//switch (input) {
//case ADD:
//	break;
//case SUB:
//	break;
//case MUL:
//	break;
//case DIV:
//	break;
//}
#pragma endregion

	printf("%zd\n", sizeof(struct S));
	printf("%zd\n", sizeof(union u));


	return 0;
}