#include <stdio.h>

struct data{
    char name[10];
    int math;
}student[3];

int main(){

    for(int i = 0;i<3;i++){
        gets(student[i].name);
        scanf("%d",&student[i].math);
        while(getchar() != '\n');
    }

    for(int i = 0;i<3;i++){
        printf("學生姓名:%s 學生成績:%d\n",student[i].name,student[i].math);
    }


    return 0;
}