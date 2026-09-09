#include <iostream>

int main() {
    float hours;
    float minutes;

    // Prompt user for input
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    // Conversion logic: 1 hour = 60 minutes
    minutes = hours * 60;

    // Display the result
    std::cout << hours << " hours is equal to " << minutes << " minutes." << std::endl;

    return 0;
}
