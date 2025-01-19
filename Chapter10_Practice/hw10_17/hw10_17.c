#include <stdio.h>


int main(){

    int arr[] = {1,4,6,8,3,4,7,9};
    size_t sz = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    int max_idx = 0;
    int min_idx = 0;
    for(int i = 0;i<sz;i++){
        int max = *ptr; 
        int min = *ptr;

        if(*(ptr+i) > max){
            max = *(ptr+i);
            max_idx = i;
        }
        else{
            min = *(ptr+i);
            min_idx = i;
        }
    }
    printf("%d %d",max_idx,min_idx);

    return 0;
}