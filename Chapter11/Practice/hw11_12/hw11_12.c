#include <stdio.h>
#define MAX 2
struct data{
    char name[10];
    int math;
} stu[MAX];
int main(){

    for(int i = 0;i<MAX;i++){
        printf("�ǥͩm�W:\n");
        gets((stu+i)->name);
        printf("�ƾǦ��Z:\n");
        scanf("%d",&(stu+i)->math);
        while(getchar() != '\n');
    }

    for(int i = 0;i<MAX;i++){
        printf("Name: %s, Score: %d\n",(stu+i)->name,(stu+i)->math);
    }
    return 0;
}