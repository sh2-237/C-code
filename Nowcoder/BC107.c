// 转置矩阵

#include <stdio.h>

int main() {
    int m,n;
    scanf("%d %d",&m,&n);

    int matrix[10][10] = {0};
    int matrix2[10][10] = {0};

    for(int i = 0;i<m;i++){
        for(int j = 0; j <n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    // Âà¸m
    for( int i = 0; i<m;i++){
        for(int j = 0;j<n;j++){
            matrix2[j][i] = matrix[i][j];
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
