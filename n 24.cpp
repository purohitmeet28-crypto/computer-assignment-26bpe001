#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int temp;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping logic
    temp = a; // temp becomes 10
    a = b;    // a becomes 20
    b = temp; // b becomes 10

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
