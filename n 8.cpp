#include <stdio.h>

int main() {
    float dollars, rupees;
    // Current approximate exchange rate for USD to INR
    float exchange_rate = 95.76; 

    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);

    rupees = dollars * exchange_rate;

    printf("Equivalent amount in Rupees: %.2f\n", rupees);

    return 0;
}
