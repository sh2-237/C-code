// 打印菱形
#include <stdio.h>


int main() {

    int n;


    while ((scanf("%d", &n)) != EOF) {
        // sp用來控制下三角形的空格
        int sp = 1; //每次進迴圈都初始化

        // 打印上三角形
        for (int i = 1; i <= n + 1; i++) { 
            for (int j = i; j < n + 1; j++) {
                printf(" ");
            }
            for (int k = 1; k <= i; k++ ) {
                printf("* ");
            }
            printf("\n");
        }

        // 打印下三角形
        while (1) {
            if (sp > n) {
                break;
            }
            for (int i = 1; i <= sp; i++) {
                printf(" ");
            }
            for (int j = sp; j <= n; j++) {
                printf("* ");
            }
            printf("\n");
            sp++;
        }
    }




    return 0;
}