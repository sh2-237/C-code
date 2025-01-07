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

	int curr[20] = { 0 }, prev[20] = { 0 };
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				curr[j] = 1;
			}
			else {
				// 現在的第j個就是上一輪的 第j個 + 第j-1個
				curr[j] = prev[j - 1] + prev[j];
				
			}
			printf("%d ", curr[j]);
		}
		printf("\n");
		// 更新數據
		for (int k = 0; k <= i; k++) {
			prev[k] = curr[k];
		}
	}
	#pragma endregion

	

	return 0;
}

