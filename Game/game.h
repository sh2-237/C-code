#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 80

// ��l�ƴѽL
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch);

// ���L�ѽL

void DisplayBoard(char board[ROWS][COLS], int row, int col);

// ���m�p

void SetMine(char mine[ROW][COLS],int row, int col);

// �Ƭd�p

void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
