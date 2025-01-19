#include <stdio.h>

struct date{
    int month;
    int day;
};

struct data{
    char name[10];
    int math;
    struct date birthday;
}s1;


int main(){

    
    gets(s1.name);
    scanf("%d %d %d",&s1.math,&s1.birthday.month,&s1.birthday.day);

    printf("Name: %s\n",s1.name);
    printf("Score: %d\n",s1.math);
    printf("Birthday: %d/%d\n",s1.birthday.month,s1.birthday.day);
    
    printf("%zd\n",sizeof(s1));
    return 0;
}