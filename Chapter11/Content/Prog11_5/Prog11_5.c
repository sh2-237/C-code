#include <stdio.h>

struct date{
    int month;
    int day;
};


struct data{
    char name[10];
    int math;
    struct date birthday; // �ŧidate���c�������ܶq
} s1 = {"Mary",74,{10,2}};

int main(){

    printf("�ǥͩm�W:%s\n",s1.name);
    printf("�ǥͦ��Z:%d\n",s1.math);
    printf("�ǥͥͤ�:%d��%d��\n",s1.birthday.month, s1.birthday.day);

    return 0;
}