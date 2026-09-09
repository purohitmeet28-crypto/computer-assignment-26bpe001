#include <stdio.h>

int main() {
    int num1, num2, product;

    // Ask user for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate product
    product = num1 * num2;

    // Display the result
    printf("Product: %d\n", product);

    return 0;
}
