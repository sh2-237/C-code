#define _CRT_SECURE_NO_WARNINGS  1


// �~�ն�
#include <stdio.h>

// �e����W�h
// �W�h
// 1. �@���u�ಾ�ʤ@�Ӷ�L
// 2. �j��L�����b�p��L���W��
// 3. ���T�ڬW�l�i�ѨϥΡG�_�l�W�B���U�W�B�ؼЬW


void move(char from, char to) {
    printf("%c -> %c\n", from, to); 
}

void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        move(A, C);
    }
    else {
        hanoi(n - 1, A, C, B); // �ڭn�Nn-1��sheet�q A �ǥ� C ���ʨ� B
        move(A, C);
        hanoi(n - 1, B, A, C); // �N n-1�� sheet �q B �ǥ� A ���ʨ� C
    }
}

int main() {
    int n;
    printf("��J�~�ն�ƶq�G");
    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');
    return 0;
}