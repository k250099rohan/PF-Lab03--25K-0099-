#include <stdio.h>

int main() {
    char city[50], country[50];
    float population, area;
    char grade;

    printf("Enter city: ");
    scanf("%s", city);
    printf("Enter country: ");
    scanf("%s", country);
    printf("Enter population: ");
    scanf("%f", &population);
    printf("Enter area: ");
    scanf("%f", &area);
    printf("Enter grade: ");
    scanf(" %c", &grade);

    printf("You live in %s, %s.\n", city, country);
    printf("Population: %.0f\n", population);
    printf("Area: %.2f\n", area);
    printf("Grade: %c\n", grade);

    return 0;
}