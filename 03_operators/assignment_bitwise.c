/*
 * Assignment and Bitwise Operators
 * Demonstrates various assignment and bitwise operations
 */

#include <stdio.h>

int main() {
    int a = 10;
    
    // Assignment operators
    printf("Assignment Operators:\n");
    printf("a = %d\n", a);
    
    a += 5;  // a = a + 5
    printf("a += 5: %d\n", a);
    
    a -= 3;  // a = a - 3
    printf("a -= 3: %d\n", a);
    
    a *= 2;  // a = a * 2
    printf("a *= 2: %d\n", a);
    
    a /= 4;  // a = a / 4
    printf("a /= 4: %d\n", a);
    
    // Bitwise operators
    printf("\nBitwise Operators:\n");
    int x = 5, y = 3;  // Binary: x=0101, y=0011
    
    printf("x = %d, y = %d\n", x, y);
    printf("x & y = %d\n", x & y);   // AND
    printf("x | y = %d\n", x | y);   // OR
    printf("x ^ y = %d\n", x ^ y);   // XOR
    printf("~x = %d\n", ~x);         // NOT
    printf("x << 1 = %d\n", x << 1); // Left shift
    printf("x >> 1 = %d\n", x >> 1); // Right shift
    
    return 0;
}
