#include <stdio.h>

void square(int *arr){
    for(int i = 0 ; i<7;i++){
        *(arr+i) = *(arr+i) * *(arr+i);
    }
}


int main(){
    int arr[] = {1,2,3,4,5,6,7};
    size_t sz = sizeof(arr)/sizeof(arr[0]);
    square(arr);

    for(int i = 0;i<sz;i++){
        printf("%d ",arr[i]);
    }

    

    return 0;
}