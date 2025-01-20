#include <stdio.h>
#define MAX 5
struct data
{
    char name[10];
    int score;
} stu[MAX] = {{"A", 50}, {"B", 60}, {"C", 100}, {"D", 40}, {"E", 70}};

struct data best(struct data stu[])
{
    int top = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (stu[i].score > stu[top].score)
        {
            top = i;
        }
    }
    return stu[top];
}

void failed(struct data student[])
{
    for (int i = 0; i < MAX; i++)
    {
        if (student[i].score < 60)
        {
            printf("Name: %s, Score: %d\n", student[i].name, student[i].score);
        }
    }
}

double average(struct data student[])
{
    double sum = 0;
    for (int i = 0; i < MAX; i++)
    {
        sum += student[i].score;
    }
    return (double)sum / MAX;
}

void sort(struct data student[])
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX - i - 1; j++)
        {
            if (student[j].score < student[j + 1].score)
            {
                struct data tmp;
                tmp = student[j + 1];
                student[j + 1] = student[j];
                student[j] = tmp;
            }
        }
    }
}
int main()
{
    struct data Max = best(stu);
    printf("Max:\n");
    printf("Name: %s,Score: %d\n", Max.name, Max.score);
    printf("Failed:\n");
    failed(stu);
    printf("Average:\n");
    double avg = average(stu);
    printf("After sorting:\n");
    sort(stu);
    for (int i = 0; i < MAX; i++)
    {
        printf("Name: %s, Score: %d\n", stu[i].name, stu[i].score);
    }
    return 0;
}