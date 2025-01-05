#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            board[i][j] = ch;
        }
    }
}

void DisplayBoard(char board[ROWS][COLS], int row, int col) {
    printf("-----------���p----------\n");
    for (int i = 0; i <= row; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i <= row; i++) {
        printf("%d ", i);
        for (int j = 1; j <= col; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}
// ���m�p�O�b�ѽL�W�H����10�Ӯy�г]�m
// x�By���d��b1~9
void SetMine(char mine[ROW][COLS], int row, int col) {
    int count = EASY_COUNT;
    int x, y;
    
    while (count) {
        x = rand() % ROW+1; // ��ROW = 9��mod �d��|�b 0~8
        y = rand() % COL+1;

        if (mine[x][y] != '1') {
            mine[x][y] = '1'; //���m�@�ӹp
            count--;
        }
    }
}
int GetMineCount(char mine[ROWS][COLS], int x, int y) {
    int count = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if ((x + i >= 1 && x + i < ROWS) &&
                (y + j >= 1 && y + j < COLS)) {
                if (mine[x + i][y + j] == '1') {
                    count++;
                }
            }
        }
    }
    return count;
}

// �Ư��p
// 1. ��J�@�Ӯy��
// 2. �P�_�o�Ӯy�ЬO�_�V��
// 3. �o�Ӧ�m�O���O�p
//  3.1 �p�G�O�p -> ���� �C������
//  3.2 �p�G���O�p -> �Ư��P�򦳦h�ֹp
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
    int x = 0, y = 0;
    int win = 0;
    while (win < col * row - EASY_COUNT) {
        printf("�п�J�n�Ƭd���y��:");
        scanf("%d %d", &x, &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col) {
            if (mine[x][y] == '1') {
                printf("�ܿ�ѡA�A��p�F,�C������\n");
                DisplayBoard(mine, ROW, COL);
                break;
            }
            else { //��J���y�Ф��O���O�p
                int count = GetMineCount(mine,x,y);
                show[x][y] = count + '0';
                DisplayBoard(show, ROW, COL);
                win++;

            }
        }
        else {
            printf("��J���~�AX�PY���d�����b1~9");
        }
    }
    
    if (win == col * row - EASY_COUNT) {
        printf("�Ƭd���\�A�C������\n");
        DisplayBoard(mine, ROW, COL);
    }
    
}