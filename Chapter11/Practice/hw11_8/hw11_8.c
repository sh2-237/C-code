#include <stdio.h>


struct time{
    int hour;
    int minutes;
    double second;
};

struct date{
    int year;
    int month;
    int day;
    struct time t;
};





int main(){

    struct date now = {2025,1,19,{17,50,0.00}};

    printf("%02d/%02d/%4d\t",now.month,now.day,now.year);
    printf("%02d:%02d:%02.2f\n",now.t.hour,now.t.minutes,now.t.second);
    printf("%zd",sizeof(now));

    return 0;
}