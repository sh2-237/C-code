<<<<<<< HEAD
// 打印X圖形
=======
// 打印X图形
>>>>>>> 25886ec837f33c4c2f773a984235580385290ca1

#include <stdio.h>

int main() {

    int n = 0;

    while((scanf("%d",&n)) != EOF){
<<<<<<< HEAD
        for(int i = 0 ;i< n;i++){ // 控制列
            for(int j =0 ; j< n;j++){ //控制行
=======
        for(int i = 0 ;i< n;i++){ // ±±¨î¦C
            for(int j =0 ; j< n;j++){ //±±¨î¦æ
>>>>>>> 25886ec837f33c4c2f773a984235580385290ca1
                if((i == j) || (i == n-1-j)){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }    

    return 0;
}
