#include <stdio.h>


int main(){

   char str[2][20] = {"Time is money", "Have a good time"};

    puts(*(str));
    puts(*(str+1));
    


    return 0;
}