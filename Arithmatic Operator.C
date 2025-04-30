#include<stdio.h>

int main()
{
    int a, b;
    
    printf("Enter 'a' number:%d", a);
    scanf("%d", &a);

    printf("Enter 'b' number:%d", b);
    scanf("%d", &b);

    printf("\nAddition: %d", a + b);
    printf("\nSubstrection: %d", a - b);
    printf("\nMultiplication: %d", a * b);
    printf("\nDivision: %d", a / b);
    printf("\nModulus: %d", a % b);

    return 0;
}