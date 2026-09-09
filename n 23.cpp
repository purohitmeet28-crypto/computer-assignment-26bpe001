#include <stdio.h>

int main() {
    int sub1, sub2, sub3, total;
    float average;

    // Get input marks for three subjects
    printf("Enter marks of three subjects: \n");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    // Calculate total and average
    total = sub1 + sub2 + sub3;
    average = total / 3.0;

    // Display the results
    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}
