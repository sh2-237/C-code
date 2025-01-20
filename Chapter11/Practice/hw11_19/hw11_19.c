#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{

    char key;
    enum color
    {
        red = 114,
        RED = 82,
        green = 103,
        GREEN = 71,
        blue = 98,
        BLUE = 66
    } shirt;

    do
    {
        printf("請輸入r,g or b:\n");
        key = getchar();
    } while ((key != red) && (key != green) && (key != blue) && (key != RED) && (key != GREEN) && (key != BLUE));

    shirt = key;

    switch (shirt)
    {
    case red:
    case RED:
        printf("您選擇了紅色\n");
        break;
    case green:
    case GREEN:
        printf("您選擇了綠色\n");
        break;
    case blue:
    case BLUE:
        printf("您選擇了藍色\n");
        break;
    }
    return 0;
}