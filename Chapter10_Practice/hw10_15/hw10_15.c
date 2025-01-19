#include <stdio.h>
#include <stdlib.h>


int main(){

    int arr[5] = {31,17,33,22,16};

    int *ptr = arr;
    
    for(int i = 0;i<5;i++){
        *(ptr+i) += 10;
        printf("%d ", *(ptr+i));
    }

    printf("\n");
    
    system("pause");
    return 0;
}