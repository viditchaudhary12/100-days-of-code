#include <stdio.h>

int main() {
    float radius;
    float pi = 3.14159;

    scanf("%f", &radius);
    printf("Area=%.2f, Circumference=%.2f\n", pi * radius * radius, 2 * pi * radius);

    return 0;
}