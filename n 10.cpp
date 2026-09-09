#include <stdio.h>

int main() {
    float dollars, rupees, pounds;

    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);

    // Convert dollars to rupees
    rupees = dollars * 48;

    // Convert rupees to pounds
    pounds = rupees / 70;

    printf("Amount in Pounds: %.2f\n", pounds);

    return 0;
}8
