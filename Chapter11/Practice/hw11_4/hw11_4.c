#include <stdio.h>

struct time{
    int hour;
    int minutes;
    double second;
}start = {12,32,25.49},end = {15,12,17.53};

struct elapse{
    struct time elap;
}elaps;

int main(){

    printf("%02d:%02d:%2.2f\n",start.hour,start.minutes,start.second);
    printf("%02d:%02d:%2.2f\n",end.hour,end.minutes,end.second);

    printf("經過的時間:\n");
    if(end.hour - start.hour < 0){
        elaps.elap.hour = end.hour - start.hour + 24;
    }
    else{
        elaps.elap.hour = end.hour - start.hour;
    }

    if(end.minutes - start.minutes < 0){
        elaps.elap.minutes = end.minutes - start.minutes + 60;
    }
    else{
        elaps.elap.minutes = end.minutes - start.minutes;
    }

    if(end.second - start.second < 0){
        elaps.elap.second = end.second - start.second + 60.00;
    }
    else{
        elaps.elap.second = end.second - start.second;
    }
    
    printf("%02d:%02d:%2.2f\n",elaps.elap.hour, elaps.elap.minutes,elaps.elap.second);
    printf("%zd",sizeof(start));
    return 0;
}