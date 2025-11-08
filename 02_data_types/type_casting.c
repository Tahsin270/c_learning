/*
 * Type Casting in C
 * Demonstrates implicit and explicit type casting
 */

#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 3;
    float result;
    
    // Implicit casting
    result = num1 + num2;
    printf("Without casting: %.2f\n", result);
    
    // Explicit casting
    result = (float)num1 / num2;
    printf("With casting: %.2f\n", result);
    
    // Character to integer
    char ch = 'A';
    printf("Character: %c, ASCII: %d\n", ch, (int)ch);
    
    // Float to int (truncation)
    float f = 9.99;
    int i = (int)f;
    printf("Float: %.2f, Integer: %d\n", f, i);
    
    return 0;
}
