#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include <stdbool.h>
void Print(int* arr,size_t sz) {
	
	for (int i = 0; i < sz; i++) {
		printf("%d ", *(arr + i));
	}
	printf("\n");
}

void Bubble_Sort(int *arr, size_t sz) {

	for (int i = 0; i < sz; i++) {
		for (int j = 0; j < sz - i - 1;j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int findRound(const char* src, char* find)
{
	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
	strcpy(tmp, src); //先拷贝一遍
	strcat(tmp, src); //再连接一遍
	return (strstr(tmp, find) != NULL); //看看找不找得到
}


void menu() {
	printf("********************************************\n");
	printf("*           選擇您要執行的功能:            *\n");
	printf("*           1. add       2. sub            *\n");
	printf("*           3. mul       4. div            *\n");
	printf("********************************************\n");
}

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}





int main() {
	#pragma region 猜兇手
	/*
	A说：不是我。
	B说：是C。
	C说：是D。
	D说：C在胡说
	已知3个人说了真话，1个人说的是假话。
	*/

	//char ch[] = { 'A','B','C','D' };

	//for (int i = 0; i < 4; i++) {
	//	int truth = 0; //紀錄說真話的人數

	//	int killer = i; // 假設兇手是下標為i的人

	//	int A_truth = (killer != 0);

	//	int B_truth = (killer == 2);

	//	int C_truth = (killer == 3);

	//	int D_truth = (killer != 3);

	//	truth = A_truth + B_truth + C_truth + D_truth;

	//	if (truth == 3) {
	//		printf("兇手為: %c", ch[killer]);
	//		break;
	//	}
	//}
#pragma endregion

	#pragma region 楊輝三角
	// 二維數組的方式實現
	#pragma region 二維數組

	/*	int arr[20][20] = { 0 };
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 20; j++) {
				arr[i][j] = 1;
			}

		}

		int n;
		scanf("%d", &n);
		int tmp[20] = { 0 };
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				if (j == 0 || j == i) {
					printf("1 ");
				}
				else {
					arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
					printf("%d ", arr[i][j]);
				}
			}
			printf("\n");
		}
		*/

	#pragma endregion

	// 一維數組的方式實現

	//int curr[20] = { 0 }, prev[20] = { 0 };
	//int n;
	//scanf("%d", &n);

	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j <= i; j++) {
	//		if (j == 0 || j == i) {
	//			curr[j] = 1;
	//		}
	//		else {
	//			// 現在的第j個就是上一輪的 第j個 + 第j-1個
	//			curr[j] = prev[j - 1] + prev[j];
	//			
	//		}
	//		printf("%d ", curr[j]);
	//	}
	//	printf("\n");
	//	// 更新數據
	//	for (int k = 0; k <= i; k++) {
	//		prev[k] = curr[k];
	//	}
	//}
	#pragma endregion

	#pragma region 杨氏矩阵
	//int arr[4][4] = { {1,4,7,8}, {2,5,8,9},{3,6,10,11},{10,15,20,25} };

	//int target;
	//int rows =  0 , cols = 3;
	//scanf("%d", &target);

	//// 从矩阵的最右上的元素开始遍历
	//while ( (rows < 4 ) && (cols >= 0)) {
	//	if (arr[rows][cols] == target) {
	//		printf("%d found in matrix\n", target);
	//		break;
	//	}
	//	else if (arr[rows][cols] > target) { // 若当前值大于target
	//		cols--;
	//	}
	//	else { // 当前值小于target
	//		rows++;
	//	}


	//}

#pragma endregion

	#pragma region 字符串旋转结果
	/*
	例如：给定s1 =AABCD和s2 = BCDAA，返回1

	给定s1=abcd和s2=ACBD，返回0.

	AABCD左旋一个字符得到ABCDA
	AABCD左旋两个字符得到BCDAA
	AABCD右旋一个字符得到DAABC
	*/

	//const char* str1 = "abcde";
	//const char* str2 = "bcdea";
	//printf("%d", findRound(str1, str2));
#pragma endregion

	#pragma region 轉移表


	//int input = 0;
	//menu();
	//

	//int (*p[5])(int x, int y) = {0,add,sub,mul,div};

	//int num1, num2;

	//do {
	//	printf("輸入您要運行的功能:");
	//	scanf("%d", &input);
	//	if (input <= 4 && input > 0) {
	//		printf("輸入操作數:");
	//		scanf("%d %d", &num1, &num2);
	//		int ret = (*p[input])(num1, num2);
	//		printf("Result:%d\n", ret);
	//	}
	//	else if (input == 0) {
	//		printf("Exit\n");
	//	}
	//	else {
	//		printf("輸入錯誤，重新輸入\n");
	//	}
	//} while (input);
	#pragma endregion

#pragma region 單身狗2

int num[] = { 1,2,3,4,5,1,2,3,4,6 };
size_t sz = sizeof(num) / sizeof(num[0]);

for (int i = 0; i < sz; i++) {
	int count = 1;
	for (int j = i+1; j < sz; j++) {
		if (num[i] == num[j]) {
			count++;
			num[j] = 0;
		}

	}
	if (count == 1 && num[i] != 0) {
		printf("%d ", num[i]);
	}

}

#pragma endregion

	return 0;
}

