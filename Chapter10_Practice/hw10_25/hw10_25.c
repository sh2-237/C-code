#include <stdio.h>


int main(){

    int arr[2][4] = {{2,3,4,5},{6,7,8,9}};

    printf("%d\n",arr);
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr+1);
    printf("%d\n",*(arr+0));
    printf("%d\n",*(arr+1));
    printf("%d\n",*(arr+1)+0);
    printf("%d\n",*(arr+1)+1);
    printf("%d\n",*(arr+1)+2);
    printf("%d\n",*(arr+1)+3);
    printf("%d\n",*(*(arr+1)+0));
    printf("%d\n",*(*(arr+1)+1));
    printf("%d\n",*(*(arr+1)+2));
    printf("%d\n",*(*(arr+1)+3));

    


    return 0;
}