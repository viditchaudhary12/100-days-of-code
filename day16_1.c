#include <stdio.h>

int main() {
    int num;
    long long binary = 0, place = 1;

    scanf("%d", &num);

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    while (num > 0) {
        int rem = num % 2;
        binary += rem * place;
        place *= 10;
        num /= 2;
    }

    printf("%lld\n", binary);

    return 0;
}