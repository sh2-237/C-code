#include <stdio.h>

struct data{
    char name[10];
    int math;
};

void display(struct data s){
    printf("�ǥͩm�W:%s\n",s.name);
    printf("�ǥͦ��Z:%d\n",s.math);
    s.math += 10; // �o��+10�ä��|�v�T��main��Ƥ���s1
}

int main(){

    struct data s1 = {"Jenny",74};

    display(s1);
    printf("%d",s1.math);


    return 0;
}