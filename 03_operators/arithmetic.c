/*
 * Arithmetic Operators in C
 * Demonstrates +, -, *, /, %
 */

#include <stdio.h>

int main() {
    int a = 10, b = 3;
    
    printf("a = %d, b = %d\n\n", a, b);
    
    // Basic arithmetic operations
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    
    // Increment and decrement
    printf("\nIncrement and Decrement:\n");
    printf("a++ = %d\n", a++);  // Post-increment
    printf("a = %d\n", a);
    printf("++a = %d\n", ++a);  // Pre-increment
    printf("a-- = %d\n", a--);  // Post-decrement
    printf("--a = %d\n", --a);  // Pre-decrement
    
    return 0;
}
