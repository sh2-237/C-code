#include <stdio.h>
#define ROW 4
#define COL 3

void search(int arr[][COL], int *b){
    b[0] = *(*(arr)); // �G���Ʋժ�����O�۷��G�ū��СA�ҥH�Ĥ@���Ѥޥά۷����oarr���a�} �ĤG���Ѥޥά۷�����arr�����e
    b[1] = *(*(arr));

    for(int i = 0;i<ROW;i++){
        for(int j = 0;j<COL;j++){
            if(*(*arr+i)+j > b[0]){
                b[0] = *(*(arr+i)+j);
            }
            if(*(*arr+i)+j < b[1]){
                b[1] = *(*(arr+i)+j);
            }
        }
    }
}




int main(){

    int arr[ROW][COL] = {{26,5,7},
                         {10,3,47},
                         {6,76,8},       
                         {40,4,32}};
    int i,j, b[2];
    printf("�G���Ʋդ�������:\n");

    for(int i = 0;i<ROW;i++){
        for(int j = 0;j<COL;j++){
            printf("%2d ", *(*(arr+i)+j));
        }
        printf("\n");
    }

    search(arr,b);
    printf("�G���Ʋժ��̤j��:%2d\n",b[0]);
    printf("�G���Ʋժ��̤p��:%2d\n",b[1]);



    

    return 0;
}