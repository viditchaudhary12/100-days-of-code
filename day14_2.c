#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int hasEven = 0;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven) {
        printf("%lld\n", product);
    } else {
        printf("0 (No even numbers in the range)\n");
    }

    return 0;
}