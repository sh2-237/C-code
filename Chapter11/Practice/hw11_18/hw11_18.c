#include <stdio.h>

int main()
{

    enum boolean
    {
        FALSE,
        TRUE
    } test;

    test = 5 < 20; // 1

    if (test == TRUE)
    {
        printf("5<20����\n");
    }
    else
    {
        printf("5>=20������\n");
    }

    return 0;
}