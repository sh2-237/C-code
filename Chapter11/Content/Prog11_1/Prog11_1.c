#include <stdio.h>

struct data
{
    char name[10];
    int math;
} student;


int main(){

    printf("�п�J�ǥͩm�W:\n");
    gets(student.name);
    printf("�п�J�ǥͦ��Z:\n");
    scanf("%d",&student.math);

    printf("�ǥͩm�W:%s ���Z:%d",student.name,student.math);
    



    return 0;
}