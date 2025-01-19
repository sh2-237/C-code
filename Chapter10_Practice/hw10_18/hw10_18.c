#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int count_ch(char *str){
    int count = 0;
    while(*str != '\0'){
        count++;
        str++;
    }
    
    return count;

}

int count_lower(char* str){
    int count = 0;
    while(*str != '\0'){
        if(islower(*str)){
            count++;
        }
        str++;
    }
    return count;
}

int main(){

    char* ptr = "We are best friends.";

    int count = count_ch(ptr);
    int count_low = count_lower(ptr);
    printf("%d %d",count, count_lower);
    
    


    return 0;
}