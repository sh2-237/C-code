#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 80

// ªì©l¤Æ´Ñ½L
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch);

// ¥´¦L´Ñ½L

void DisplayBoard(char board[ROWS][COLS], int row, int col);

// ¥¬¸m¹p

void SetMine(char mine[ROW][COLS],int row, int col);

// ±Æ¬d¹p

void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
