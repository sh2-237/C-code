#include <stdio.h>

struct data{
    char name[10];
    int math;
};

void display(struct data s){
    printf("學生姓名:%s\n",s.name);
    printf("學生成績:%d\n",s.math);
    s.math += 10; // 這裡+10並不會影響到main函數中的s1
}

int main(){

    struct data s1 = {"Jenny",74};

    display(s1);
    printf("%d",s1.math);


    return 0;
}