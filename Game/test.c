#define _CRT_SECURE_NO_WARNINGS 1
// 測試掃雷遊戲

#include "game.h"

void menu() {
    printf("****************************\n");
    printf("*********** 1. Play ********\n");
    printf("*********** 0. Exit ********\n");
    printf("****************************\n");
}

void Game() {

    char mine[ROWS][COLS];  //存放雷的信息
    char show[ROWS][COLS];  //排查出雷的信息

    // 初始化棋盤
    InitBoard(mine, ROWS, COLS, '0');
    InitBoard(show, ROWS, COLS, '*');

    // 打印棋盤
    //DisplayBoard(mine, ROW, COL);
    DisplayBoard(show, ROW, COL);

    // 布置雷
    SetMine(mine,ROW,COL);
    DisplayBoard(mine, ROW, COL);
    // 排查雷
    FindMine(mine,show,ROW,COL);
}

void test() {
    int input;
    srand((unsigned int)time(NULL));
    do {
        menu();
        printf("Please choose: ");
        scanf("%d", &input);
        switch (input)
        {
        case 0:
            printf("退出遊戲\n");
            break;
        case 1:
            Game();
            break;
        default:
            printf("輸入錯誤，重新輸入!\n");
            break;
        }
    } while (input);


}

int main() {


    test();



    return 0;
}