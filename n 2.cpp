#include <stdio.h>

int main() {
    // Declare variables to hold the inputs and the final result
    int num1, num2, difference;

    // Prompt user for the first number
    printf("Enter first number: ");
    scanf("%d", &num1);

    // Prompt user for the second number
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform subtraction
    difference = num1 - num2;

    // Display the calculation result
    printf("The result of %d - %d is: %d\n", num1, num2, difference);

    return 0;
}
