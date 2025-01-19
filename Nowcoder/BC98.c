// 序列中刪除指定數字
#include <stdio.h>

int main(){
    int arr1[50] = {0};
    int arr2[50] = {0};
    int N = 0;
    scanf("%d",&N);
    for(int i = 0;i<N;i++){
        scanf("%d ",&arr1[i]);
    }
    int Rem_num = 0;
    scanf("%d",&Rem_num);
    for(int i = 0;i<N;i++){
        int idx = 0;
        if(arr1[i] == Rem_num){
            continue;
        }
        else{
            arr2[idx] = arr1[i];
            idx++;
        }
        printf("%d ",arr2[idx]);
    }

    return 0;
}