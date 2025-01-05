#define _CRT_SECURE_NO_WARNINGS  1

#include "n_k.h"

long long n_k(int n, int k){
	while (k > 0) {
		return n * n_k(n, k - 1);
	}
}
   
int DigitSum(int  n) {
	
	while (n > 9) {
		return n % 10 + DigitSum(n / 10);
	}
	
}

int fac(int n) {
	// 遞歸實現
	/*if (n == 0) {
		return 1;
	}
	else {
		return n * fac(n - 1);
	}*/

	// 非遞歸實現

	int sum = 1;
	for (int i = n; i > 0; i--) {
		sum *= i;
	}
	return sum;
}

void Print(int n) {
	if (n > 9) {
		Print(n / 10);
	}
	printf("%d ", n % 10);
}