#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit=%.0f\n", fahrenheit);

    return 0;
}

/*
OUTPUT 1:
Input: 0
Output: Fahrenheit=32

OUTPUT 2:
Input: 100
Output: Fahrenheit=212
*/
