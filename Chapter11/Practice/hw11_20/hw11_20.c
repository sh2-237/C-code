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
    // �p�G��typedef�g�bmain��Ƥ��A�h�өw�q�N�|�ܦ������ܶq�A�p���@�ӡA�b��L�a��n�ϥ�SCORE�N�|��undefined
    SCORE s1 = {"Jenny", 74};
    display(s1);

    return 0;
}

void display(SCORE st)
{
    printf("Name: %s\n", st.name);
    printf("Math: %d\n", st.math);
}