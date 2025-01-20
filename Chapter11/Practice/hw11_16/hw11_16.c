#include <stdio.h>

struct time{
    int hour;
    int minutes;
    double second;
}start = {12,32,25.49},end = {15,12,17.53},elaps = {0,0,0.00};



void display(struct time *ptr){
    printf("%02d:%02d:%02.2f\n", ptr->hour,ptr->minutes,ptr->second);
}

int main(){

    display(&start);
    display(&end);

    if(end.hour - start.hour < 0){
        elaps.hour = end.hour - start.hour + 24;
    }
    else{
        elaps.hour = end.hour - start.hour;
    }

    if(end.minutes - start.minutes < 0){
        elaps.minutes = end.minutes - start.minutes + 60;
    }
    else{
        elaps.minutes = end.minutes - start.minutes;
    }

    if(end.second - start.second < 0){
        elaps.second = end.second - start.second + 60.00;
    }
    else{
        elaps.second = end.second - start.second;
    }

    display(&elaps);



    return 0;
}