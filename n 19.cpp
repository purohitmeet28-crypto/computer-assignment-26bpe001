#include <stdio.h>

int main() {
    float radius, area;

    // Ask user for the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area using 22.0/7.0 for precise decimal division
    area = (22.0 / 7.0) * radius * radius;

    // Display the result
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
