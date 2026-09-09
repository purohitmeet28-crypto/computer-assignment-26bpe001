#include <stdio.h>

int main() {
    int total_minutes;
    int hours;
    int minutes;

    // Prompt user for input
    printf("Enter total minutes: ");
    scanf("%d", &total_minutes);

    // Calculate hours using integer division
    hours = total_minutes / 60;

    // Calculate remaining minutes using modulo operator
    minutes = total_minutes % 60;

    // Display the result
    printf("%d minutes is equal to %d hours and %d minutes.\n", total_minutes, hours, minutes);

    return 0;
}
