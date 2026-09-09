#include <stdio.h>

int main() {
    float H, L, A;

    // Input height
    printf("Enter the height (H): ");
    scanf("%f", &H);

    // Input length/base
    printf("Enter the length/base (L): ");
    scanf("%f", &L);

    // Calculate area
    A = (H * L) / 2.0;

    // Display result with 2 decimal places
    printf("The area of the triangle is: %.2f\n", A);

    return 0;
}
