#include <stdio.h>

void factorial()
{
    int n, i;
    // Use unsigned long long to handle larger factorial values
    unsigned long long factorial = 1;

    // Prompt the user for input
    printf("Enter a non-negative integer: ");
    scanf("%d", &n); //

    // Check if the number is negative
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate the factorial using a for loop
        for (i = 1; i <= n; ++i) {
            factorial *= i; // Equivalent to factorial = factorial * i;
        }
        // Print the result
        printf("Factorial of %d = %llu\n", n, factorial);
    }

}

