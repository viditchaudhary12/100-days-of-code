#include <stdio.h>

int main() {
    int length, breadth;

    scanf("%d %d", &length, &breadth);
    printf("Area=%d, Perimeter=%d\n", length * breadth, 2 * (length + breadth));

    return 0;
}

/*
OUTPUT 1:
Input: 5 10
Output: Area=50, Perimeter=30

OUTPUT 2:
Input: 3 7
Output: Area=21, Perimeter=20
*/
