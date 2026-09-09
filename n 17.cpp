#include <stdio.h>

int main() {
    float side, area, perimeter;

    // Input the side length from the user
    printf("Enter the side length of the square (L): ");
    scanf("%f", &side);

    // Calculate area (A = L^2) and perimeter (P = 4L)
    area = side * side;
    perimeter = 4 * side;

    // Display the results
    printf("\n--- Results ---\n");
    printf("Side Length (L): %.2f\n", side);
    printf("Area (A)       : %.2f\n", area);
    printf("Perimeter (P)  : %.2f\n", perimeter);

    return 0;
}
