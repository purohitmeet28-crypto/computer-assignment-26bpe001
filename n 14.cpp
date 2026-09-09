#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Ask user for input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Calculate Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
