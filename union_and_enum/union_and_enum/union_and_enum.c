#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>

#pragma region �T�|���ϥήר�
void menu() {
	printf("******* �п�J�z�n���檺�\�� *******\n");
	printf("******* 1. add     2. sub    *******\n");
	printf("******* 3. mul     4. div    *******\n");
	printf("******* ��J0��ܰh�X�ϥ�    *******\n");
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

	#pragma region �T�|�רҹ�{
	//menu();
//int input;
//printf("�п�J�z�����:");
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