#include <stdio.h>
#include <stdlib.h>

void add10(int* a,int* b){
    *a +=10;
    *b +=10;
}


int main(){
    int a = 0, b = 0;
    printf("Before calling function add10:");
    printf("a=%d,b=%d\n",a,b);

    add10(&a,&b);
    printf("After calling function add10:");
    printf("a=%d,b=%d\n",a,b);

    system("pause");
    return 0;
}