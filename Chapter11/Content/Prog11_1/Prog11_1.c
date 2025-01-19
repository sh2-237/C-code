#include <stdio.h>

struct data
{
    char name[10];
    int math;
} student;


int main(){

    printf("請輸入學生姓名:\n");
    gets(student.name);
    printf("請輸入學生成績:\n");
    scanf("%d",&student.math);

    printf("學生姓名:%s 成績:%d",student.name,student.math);
    



    return 0;
}