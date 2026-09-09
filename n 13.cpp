#include <stdio.h>

int main() {
    unsigned long long bytes;
    double kb, mb, gb;

    // Prompt user for input
    printf("Enter the number of bytes: ");
    if (scanf("%llu", &bytes) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Perform conversions using 1024 as the base factor
    kb = (double)bytes / 1024.0;
    mb = (double)bytes / (1024.0 * 1024.0);
    gb = (double)bytes / (1024.0 * 1024.0 * 1024.0);

    // Display the results formatted to 4 decimal places
    printf("\n--- Conversion Results ---\n");
    printf("Bytes:     %llu B\n", bytes);
    printf("Kilobytes: %.4f KB\n", kb);
    printf("Megabytes: %.4f MB\n", mb);
    printf("Gigabytes: %.4f GB\n", gb);

    return 0;
}
