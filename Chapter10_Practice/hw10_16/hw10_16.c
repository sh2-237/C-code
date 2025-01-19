#include <stdio.h>
#include <stdlib.h>


int main(){

    int A[5] = {74,48,30,17,62};
    int i,min,max;
    
    max = *A;
    min = *A;

    for(int i = 0; i<5;i++){
        if(*(A+i) > max){
            max = *(A+i);
        }
        else{
            min = *(A+i);
        }
    }
    printf("max = %d, min = %d ",max,min);
    

    return 0;
}