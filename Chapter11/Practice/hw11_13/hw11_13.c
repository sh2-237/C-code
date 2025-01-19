#include <stdio.h>
#define MAX 5
struct student {
    char name[10];
    int score;
}stu[MAX] = {{"A",30},{"B",50},{"C",90},{"D",100},{"E",20}};

int main(){
    struct student *ptr;
    ptr = stu;
    int top = 0;
    double sum = 0;
    for(int i = 1;i<MAX;i++){
        if((ptr+top)->score < (ptr+i)->score){
            top = i;
        }
        sum+= (ptr+i)->score;
    }
    printf("Max Score:%d, Name: %s\n",(ptr+top)->score,(ptr+top)->name);
    
    for(int i = 0;i<MAX;i++){
        if((ptr+i)->score < 60){
            printf("Name:%s, Score: %d\n",(ptr+i)->name,(ptr+i)->score);
        }
    }
    printf("Average: %.2f\n", (double) sum/MAX);

    return 0;
}