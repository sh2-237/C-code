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
    printf("-----------掃雷----------\n");
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
// 布置雷是在棋盤上隨機找10個座標設置
// x、y的範圍在1~9
void SetMine(char mine[ROW][COLS], int row, int col) {
    int count = EASY_COUNT;
    int x, y;
    
    while (count) {
        x = rand() % ROW+1; // 對ROW = 9取mod 範圍會在 0~8
        y = rand() % COL+1;

        if (mine[x][y] != '1') {
            mine[x][y] = '1'; //布置一個雷
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

// 排茶雷
// 1. 輸入一個座標
// 2. 判斷這個座標是否越界
// 3. 這個位置是不是雷
//  3.1 如果是雷 -> 炸死 遊戲結束
//  3.2 如果不是雷 -> 排茶周圍有多少雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
    int x = 0, y = 0;
    int win = 0;
    while (win < col * row - EASY_COUNT) {
        printf("請輸入要排查的座標:");
        scanf("%d %d", &x, &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col) {
            if (mine[x][y] == '1') {
                printf("很遺憾，你踩雷了,遊戲結束\n");
                DisplayBoard(mine, ROW, COL);
                break;
            }
            else { //輸入的座標不是不是雷
                int count = GetMineCount(mine,x,y);
                show[x][y] = count + '0';
                DisplayBoard(show, ROW, COL);
                win++;

            }
        }
        else {
            printf("輸入有誤，X與Y的範圍應在1~9");
        }
    }
    
    if (win == col * row - EASY_COUNT) {
        printf("排查成功，遊戲結束\n");
        DisplayBoard(mine, ROW, COL);
    }
    
}