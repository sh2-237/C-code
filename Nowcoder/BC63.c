// ���L�٧�
#include <stdio.h>


int main() {

    int n;


    while ((scanf("%d", &n)) != EOF) {
        // sp�Ψӱ���U�T���Ϊ��Ů�
        int sp = 1; //�C���i�j�鳣��l��

        // ���L�W�T����
        for (int i = 1; i <= n + 1; i++) { 
            for (int j = i; j < n + 1; j++) {
                printf(" ");
            }
            for (int k = 1; k <= i; k++ ) {
                printf("* ");
            }
            printf("\n");
        }

        // ���L�U�T����
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