#define _CRT_SECURE_NO_WARNINGS  1

// ��ƻ��k

#include <stdio.h>


// Ex 1 : ���h

int fac(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * fac(n - 1);
	}
}

// Ex 2 : ��J�@�� n�A�Ӷ��ǥ��L��ƪ��C�@��
void Print(int n) {
	if (n > 9) {
		Print(n / 10);
	}
	printf("%d ", n % 10);
}

// Ex 3 : ���i�����ƦC


long Fib(int n) {
	// �λ��k�Ӯ��O�ɶ�

	/*if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return Fib(n - 1) + Fib(n - 2);
	}*/

	// �H���N���覡�p��
	long a = 1;
	long b = 1;
	long c = 1;
	// 1 1 2 3 5 8 13
	while (n > 2) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main() {

	int n;
	scanf("%d", &n);
	/*int result = fac(n);*/

	/*printf("%d", result);*/

	/*Print(n);*/

	printf("%d", Fib(n));
	return 0;
}