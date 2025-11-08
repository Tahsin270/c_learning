/*
 * Recursion
 * Demonstrates recursive functions
 */

#include <stdio.h>

// Recursive function to calculate factorial
long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case
    }
    return n * factorial(n - 1);  // Recursive call
}

// Recursive function to calculate Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base case
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive calls
}

// Recursive function to calculate sum of digits
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;  // Base case
    }
    return (n % 10) + sumOfDigits(n / 10);  // Recursive call
}

int main() {
    int n;
    
    // Factorial
    printf("Enter a number for factorial: ");
    scanf("%d", &n);
    printf("Factorial of %d is %ld\n\n", n, factorial(n));
    
    // Fibonacci series
    printf("First 10 Fibonacci numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n\n");
    
    // Sum of digits
    printf("Enter a number to find sum of digits: ");
    scanf("%d", &n);
    printf("Sum of digits of %d is %d\n", n, sumOfDigits(n));
    
    return 0;
}
