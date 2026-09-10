#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", 
           num1 + num2, num1 - num2, num1 * num2, num1 / num2);

    return 0;
}

/*
OUTPUT 1:
Input: 10 2
Output: Sum=12, Diff=8, Product=20, Quotient=5

OUTPUT 2:
Input: 7 3
Output: Sum=10, Diff=4, Product=21, Quotient=2
*/
