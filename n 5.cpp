#include <stdio.h>

int main() {
    float num1, num2;
    float sum, diff, prod, quot;

    // Ask the user to input two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    // Display basic mathematical operations
    printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, sum);
    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, diff);
    printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, prod);

    // Logic handling to prevent runtime crash by division by zero
    if (num2 != 0) {
        quot = num1 / num2;
        printf("Division: %.2f / %.2f = %.2f\n", num1, num2, quot);
    } else {
        printf("Division: Error! Division by zero is undefined.\n");
    }
       return 0;
}
