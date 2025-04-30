#include<stdio.h>

int main()
{
    int x, y;

    printf("value of x: %d", x);
    scanf("%d", &x);

    printf("\nvalue of y: %d", y);
    scanf("%d", &y);

    if (x < y) {
        printf("\nx is less than y");
    }
    else {
        printf("\nx is greater than y");
    }
    if (x != y) {
        printf("\nx is not equal to y");
    }
    else {
        printf("\nx is equal to y");
    }

    return 0;
}