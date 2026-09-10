#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("Quotient: %d\n", a / b);
    printf("Remainder: %d\n", a % b);

    return 0;
}