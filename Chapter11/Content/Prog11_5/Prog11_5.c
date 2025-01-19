#include <stdio.h>

struct date{
    int month;
    int day;
};


struct data{
    char name[10];
    int math;
    struct date birthday; // 宣告date結構的成員變量
} s1 = {"Mary",74,{10,2}};

int main(){

    printf("學生姓名:%s\n",s1.name);
    printf("學生成績:%d\n",s1.math);
    printf("學生生日:%d月%d日\n",s1.birthday.month, s1.birthday.day);

    return 0;
}