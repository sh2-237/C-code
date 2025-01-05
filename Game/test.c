#define _CRT_SECURE_NO_WARNINGS 1
// ���ձ��p�C��

#include "game.h"

void menu() {
    printf("****************************\n");
    printf("*********** 1. Play ********\n");
    printf("*********** 0. Exit ********\n");
    printf("****************************\n");
}

void Game() {

    char mine[ROWS][COLS];  //�s��p���H��
    char show[ROWS][COLS];  //�Ƭd�X�p���H��

    // ��l�ƴѽL
    InitBoard(mine, ROWS, COLS, '0');
    InitBoard(show, ROWS, COLS, '*');

    // ���L�ѽL
    //DisplayBoard(mine, ROW, COL);
    DisplayBoard(show, ROW, COL);

    // ���m�p
    SetMine(mine,ROW,COL);
    DisplayBoard(mine, ROW, COL);
    // �Ƭd�p
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
            printf("�h�X�C��\n");
            break;
        case 1:
            Game();
            break;
        default:
            printf("��J���~�A���s��J!\n");
            break;
        }
    } while (input);


}

int main() {


    test();



    return 0;
}