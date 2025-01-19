#include <stdio.h>


void display(char *ptr, int n){
    printf("%s",ptr+n);
}

int main(){

    char *str = "Hello World";

    int n =3;

    display(str,n);

    return 0;
}