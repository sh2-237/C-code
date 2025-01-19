#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>
#define SIZE 5


struct student {
    char name[10];
    int score;
};

int main() {

    struct student stu[SIZE];

    for (int i = 0; i < SIZE; i++) {
        gets(stu[i].name);
        scanf("%d", &stu[i].score);
        while (getchar() != '\n');
    }
    int max = stu[0].score;
    char* name = stu[0].name;
    double sum = 0;
    double avg = 0;

    for (int i = 0; i < SIZE; i++) {
        if (stu[i].score > max) {
            max = stu[i].score;
            name = stu[i].name;
        }
        if (stu[i].score < 60) {
            printf("Name: %s Score: %d\n", stu[i].name, stu[i].score);
        }

        sum += stu[i].score;
    }
    avg = sum / 5.0;
    printf("Max Score: %d Name: %s\n", max, name);
    printf("Average: %.2f\n", avg);





    return 0;
}