#include <stdio.h>

int length(char* ptr){
    int i =0;
    for(i = 0;*(ptr+i) !='\0';i++);
    return i+1;
}

int main(){
    int total = 0;
    char *ptr[3] = {"Tom","Timmy","Gimmy"};

    for(int i = 0;i<3;i++){
        puts(ptr[i]);
        total += length(ptr[i]);
    }

    printf("�`�@��%d�Ӧr����\n",total);


    return 0;
}