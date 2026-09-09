#include <stdio.h>

int main() {
    int i, n;

    // Ask the user to enter the upper limit (N)
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("\nEven numbers from 1 to %d are:\n", n);

    // The loop starts at 2 and increments by 2 each time
    for(i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
