#include <stdio.h>
#define ROW 2
#define COL 3

int main(){

    int i,j;
    int A[ROW][COL] = {{1,2,3},{4,5,6}};
    int B[ROW][COL] = {{3,0,2},{3,5,7}};

    printf("Matrix A+B:\n");
    
    for(i= 0;i<ROW;i++){
        for(int j = 0;j<COL;j++){
            printf("%3d ",*(*(A+i)+j) + *(*(B+i)+j));
        }
        printf("\n");
    }



    return 0;
}