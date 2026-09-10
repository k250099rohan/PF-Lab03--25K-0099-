#include <stdio.h>

int main() {
    float num;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    printf("1 decimal place: %.1f\n", num);
    printf("3 decimal places: %.3f\n", num);

    return 0;
}