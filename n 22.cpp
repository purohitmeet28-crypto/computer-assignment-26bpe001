#include <stdio.h>

int main() {
    double gross_sales, discount, net_sales;

    // Prompt user for input
    printf("Enter the Gross Sales amount: ");
    if (scanf("%lf", &gross_sales) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    // Calculate 10% discount
    discount = gross_sales * 0.10;

    // Calculate Net Sales
    net_sales = gross_sales - discount;

    // Display the results
    printf("\n--- Financial Statement ---\n");
    printf("Gross Sales: $%.2f\n", gross_sales);
    printf("Discount (10%%): $%.2f\n", discount);
    printf("Net Sales: $%.2f\n", net_sales);

    return 0;
}
