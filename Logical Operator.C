#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter a value of a: %d", a);
    scanf("%d", &a);

    printf("Enter a value of b: %d", b);
    scanf("%d", &b);

    if (a && b) {
        printf("both are true");
    }
    else {
        printf("\nAt least one is false");
    }

    if (a || b) {
        printf("\nAt least one is true");
    }
    else {
        printf("\nb is false");
    }

    return 0;
}