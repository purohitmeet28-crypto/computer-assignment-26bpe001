#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    // Input dimensions from the user
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display the results
    printf("\nArea of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);

    return 0;
}
