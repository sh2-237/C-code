#define _CRT_SECURE_NO_WARNINGS  1


// 漢諾塔
#include <stdio.h>

// 河內塔規則
// 規則
// 1. 一次只能移動一個圓盤
// 2. 大圓盤不能放在小圓盤的上面
// 3. 有三根柱子可供使用：起始柱、輔助柱、目標柱


void move(char from, char to) {
    printf("%c -> %c\n", from, to); 
}

void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        move(A, C);
    }
    else {
        hanoi(n - 1, A, C, B); // 我要將n-1個sheet從 A 藉由 C 移動到 B
        move(A, C);
        hanoi(n - 1, B, A, C); // 將 n-1個 sheet 從 B 藉由 A 移動到 C
    }
}

int main() {
    int n;
    printf("輸入漢諾塔數量：");
    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');
    return 0;
}