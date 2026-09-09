#include <stdio.h>

int main() {
    float grams, kilograms;

    // Prompt the user to enter weight in grams
    printf("Enter weight in grams: ");
    scanf("%f", &grams);

    // Conversion formula: 1 kg = 1000 grams
    kilograms = grams / 1000.0;

    // Display the result with 3 decimal places
    printf("%.2f grams is equal to %.3f kilograms\n", grams, kilograms);

    return 0;
}
