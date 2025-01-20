#include <stdio.h>

struct data{
    char name[10];
    int math;
}s1 = {"Jenny",74};

void add5(struct data *ptr){
    ptr->math += 5;

}

int main(){

    printf("Before add5(), s1.math = %d\n",s1.math);
    add5(&s1);
    printf("After add5(), s1.math = %d\n", s1.math);

    

    return 0;
}