#include <stdio.h>

int main() {
    float radius;
    float pi = 3.14159;

    scanf("%f", &radius);
    printf("Area=%.2f, Circumference=%.2f\n", pi * radius * radius, 2 * pi * radius);

    return 0;
}

/*
OUTPUT 1:
Input: 7
Output: Area=153.94, Circumference=43.96

OUTPUT 2:
Input: 3
Output: Area=28.27, Circumference=18.85
*/
