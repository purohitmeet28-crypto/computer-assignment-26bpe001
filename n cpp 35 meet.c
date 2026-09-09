#include <stdio.h>

int main() {
    int i, n;

    // Ask the user to enter the value of n
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("The first %d odd numbers are:\n", n);

    // Loop to print the first n odd numbers using the formula (2 * i - 1)
    for (i = 1; i <= n; i++) {
        printf("%d ", 2 * i - 1);
    }

    printf("\n");
    return 0;
}
