#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);
    // Loop starts at 1 and runs until it reaches n
    for(i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
