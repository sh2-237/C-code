// 有序序列合併

#include <stdio.h>

int main() {
    int arr1[1000] = {0};
    int arr2[1000] = {0};

    int n,m;
    int i = 0,j=0;
    scanf("%d %d",&n,&m);

    for(int i = 0;i<n;i++){
        scanf("%d",&arr1[i]); // scanf有空格可能會導致問題
    }
    for(int j = 0;j<m;j++){
        scanf("%d",&arr2[j]);
    }

    while((i < n) && (j < m)){
        if(arr1[i] < arr2[j]){
            printf("%d ",arr1[i]);
            i++;
        }
        else{
            printf("%d ",arr2[j]);
            j++;
        }
    }

    while(i < n){
        printf("%d ",arr1[i]);
        i++;
    }

    while(j < m){
        printf("%d ",arr2[j]);
        j++;
    }
    
    return 0;
}