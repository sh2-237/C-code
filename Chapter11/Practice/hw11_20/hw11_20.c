#include <stdio.h>

typedef struct data
{
    char name[10];
    int math;
} SCORE;

void display(SCORE);

int main()
{

    // typedef struct data SCORE;
    // 如果把typedef寫在main函數中，則該定義就會變成局部變量，如此一來，在其他地方要使用SCORE就會報undefined
    SCORE s1 = {"Jenny", 74};
    display(s1);

    return 0;
}

void display(SCORE st)
{
    printf("Name: %s\n", st.name);
    printf("Math: %d\n", st.math);
}