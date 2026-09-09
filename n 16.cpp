#include <stdio.h>

int main() {
    float P, R, N, I;

    // Input principal, rate, and time from user
    printf("Enter Principal amount (P): ");
    scanf("%f", &P);

    printf("Enter Rate of interest (R): ");
    scanf("%f", &R);

    printf("Enter Number of years (N): ");
    scanf("%f", &N);

    // Calculate simple interest
    I = (P * R * N) / 100;

    // Display the result
    printf("\nSimple Interest (I) = %.2f\n", I);

    return 0;
}

