// 變種水仙花

#include <stdio.h>
void Lily_Number(){
    for(int i = 10001;i<=99999;i++){
        int num = i;
        int sum = 0;
        int tmp = i;
        for(int j = 1;j<=5;j++){
            int divisor = 1;
            for(int k = 1;k<j;k++){
                divisor *=10;
            }
            int left = tmp / divisor;
            int right = tmp % divisor;
            sum += left * right;
        }
        if(sum == num){
            printf("%d ",i);
        }
    }
}

int main(){

    Lily_Number();

    return 0;
}