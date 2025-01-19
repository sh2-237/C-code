#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include <stdlib.h>

void count(int* num) {
	*num += 1;
}

int main() {
	
	int num = 0;
	int i = 0;
	while (i < 5) {
		count(&num);
		i++;
	}
	printf("%d", num);

	return 0;
}