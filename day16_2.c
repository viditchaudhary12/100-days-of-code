#include <stdio.h>

int main() {
    int num, temp, rev = 0, rem;

    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (num == rev) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}