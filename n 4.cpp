#include <stdio.h>

int main() {
    float dividend, divisor, quotient;

    // Prompt user for input
    printf("Enter dividend (numerator): ");
    scanf("%f", &dividend);

    printf("Enter divisor (denominator): ");
    scanf("%f", &divisor);

    // Safety check for division by zero
    if (divisor == 0) {
        printf("Error: Division by zero is undefined.\n");
        return 1; // Exit program with an error code
    }

    // Perform division
    quotient = dividend / divisor;

    // Display the result up to 2 decimal places
    printf("Result: %.2f / %.2f = %.2f\n", dividend, divisor, quotient);

    return 0; // Exit program successfully
}
