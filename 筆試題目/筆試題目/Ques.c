#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>

// �ƲզW�O�������a�}
// ��Өҥ~
// 1. sizeof(�ƲզW)
// 2. &�ƲզW

int main() {

#pragma region �Ʋյ����D
	//int a[] = { 1,2,3,4 };
	//printf("%zd\n", sizeof(a)); // 16
	//// �ƲզWa��W��bsizeof�����Aa��ܾ�ӼƲաA�p�⪺�O��ӼƲդj�p
	//printf("%zd\n", sizeof(a + 0)); // 4 or 8 
	//// �o�̪�a�O�ƲզW��ܭ������a�}
	//printf("%zd\n", sizeof(*a)); // 4
	//// �o�̪�a�O�������a�} 
	//printf("%zd\n", sizeof(a + 1)); // 4 or 8
	//// �o�̪�a�O�������a�}  (a+1)�N�O�ĤG�Ӥ������a�}
	//printf("%zd\n", sizeof(a[1])); // 4
	//printf("%zd\n", sizeof(&a));  //
	//// &a -- �o�̪��ƲզW��ܾ��ƲաA &a�O��ӼƲժ��a�}
	//// �Ʋժ��a�}�]�O�a�} �ҥH�O 4 or 8
	//printf("%zd\n", sizeof(*&a)); // 16
	//// 1.�o�̪�*�M&��P�F �ҥH������ sizeof(a)
	//// 2, &a�O�Ʋժ��a�}�A�����O int(*)[4] 
	//printf("%zd\n", sizeof(&a + 1)); // 4 or 8
	//printf("%zd\n", sizeof(&a[0]));  // 4 or 8
	//printf("%zd\n", sizeof(&a[0] + 1));  // 4 or 8
#pragma endregion

#pragma region �r�żƲ�
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr)); // 6
	//printf("%d\n", sizeof(arr + 0)); // 4 or 8
	//printf("%d\n", sizeof(*arr)); // 1
	//printf("%d\n", sizeof(arr[1])); // 1
	//printf("%d\n", sizeof(&arr)); // 4 or 8
	//printf("%d\n", sizeof(&arr + 1)); // 4 or 8
	//printf("%d\n", sizeof(&arr[0] + 1)); // 4 or 8

	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr)); // �H����
	printf("%d\n", strlen(arr + 0)); // �H����
	//printf("%d\n", strlen(*arr)); 
	// arr�O�ƲզW���O�������a�} 
	// *arr �O������ -- 'a' -- 97 
	// �N97�ǻ���strlen�Astrlen�|�{��97�O�a�}�N�}�l�X��
	// err
	//printf("%d\n", strlen(arr[1])); // �P�W
	printf("%d\n", strlen(&arr)); // �H����
	printf("%d\n", strlen(&arr + 1)); // �H����
	printf("%d\n", strlen(&arr[0] + 1)); // �H����
#pragma endregion


	return 0;
}