#include <stdio.h>

float average(float grades[10], int length);
float maximum(float grades[10], int length);
float minimum(float grades[10], int length);
char getLetterGrade(float average);

int main() {
    float grades[10];
    int length = 0;
    float total, avg, min, max;
    char grade;

    printf("====== Grades ======\nHow many grades would you like to enter: ");
    scanf("%d", &length);
    
    if (length < 1) {
        printf("Bffr bruh...\n");
        return 1;
    }

    for (int i = 0; i < (length); i++) {
        printf("Enter Grade %d: ", (i + 1));
        scanf("%f", &grades[i]);
    }

    avg = average(grades, length);
    min = minimum(grades, length);
    max = maximum(grades, length);
    grade = getLetterGrade(avg);

    printf("====== Statistics ======\nLetter Grade: %c\nAverage: %.2f\nMaximum: %.2f\nMinimum: %.2f\n", grade, avg, max, min);
    return 0;
}


float average(float grades[10], int length) {
    int i;
    float total = 0;

    for (i = 0; i < (length); i++) {
        total += grades[i];
    }

    return total / length;
}


float maximum(float grades[10], int length) {
    int i;
    float maximum = grades[0];

    for (i = 0; i < (length); i++) {
        if (grades[i] > maximum) {
            maximum = grades[i];
        }
    }

    return maximum;
}


float minimum(float grades[10], int length) {
    int i;
    float minimum = grades[0];

    for (i = 0; i < (length); i++) {
        if (grades[i] < minimum) {
            minimum = grades[i];
        }
    }

    return minimum;
}


char getLetterGrade(float average) {
    if (average > 85) {
        return 'A';
    } else if (70 <=average < 85) {
        return 'B';
    } else if (50 <= average < 70) {
        return 'C';
    } else if (25 <= average < 50) {
        return 'D';
    } else if (0 <= average < 25) {
        return 'E';
    } else {
        return 'U';
    }
}