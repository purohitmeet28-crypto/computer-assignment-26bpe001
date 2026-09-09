#include <stdio.h>

int main() {
    double kilograms, grams;

    // Prompt user for input
    printf("Enter weight in Kilograms (kg): ");
    if (scanf("%lf", &kilograms) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    // Conversion formula: grams = kilograms * 1000
    grams = kilograms * 1000.0;

    // Display the result up to 2 decimal places
    printf("%.2lf kg is equal to %.2lf grams (g).\n", kilograms, grams);

    return 0;
}
