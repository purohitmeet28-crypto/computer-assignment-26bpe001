#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Ask the user for input
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Calculate Celsius using the formula
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

    // Display the result
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}
