#define _CRT_SECURE_NO_WARNINGS  1

// 函數遞歸

#include <stdio.h>


// Ex 1 : 階層

int fac(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * fac(n - 1);
	}
}

// Ex 2 : 輸入一個 n，照順序打印整數的每一位
void Print(int n) {
	if (n > 9) {
		Print(n / 10);
	}
	printf("%d ", n % 10);
}

// Ex 3 : 斐波那契數列


long Fib(int n) {
	// 用遞歸太浪費時間

	/*if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return Fib(n - 1) + Fib(n - 2);
	}*/

	// 以迭代的方式計算
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