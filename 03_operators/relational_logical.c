/*
 * Relational and Logical Operators
 * Demonstrates comparison and logical operations
 */

#include <stdio.h>

int main() {
    int a = 10, b = 20;
    
    printf("a = %d, b = %d\n\n", a, b);
    
    // Relational operators
    printf("Relational Operators:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    
    // Logical operators
    printf("\nLogical Operators:\n");
    printf("(a < b) && (a > 0): %d\n", (a < b) && (a > 0));
    printf("(a > b) || (a > 0): %d\n", (a > b) || (a > 0));
    printf("!(a == b): %d\n", !(a == b));
    
    return 0;
}
