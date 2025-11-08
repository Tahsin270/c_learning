/*
 * Break and Continue
 * Demonstrates loop control statements
 */

#include <stdio.h>

int main() {
    int i;
    
    // Break statement
    printf("Break Example - Find first number divisible by 7:\n");
    for (i = 1; i <= 50; i++) {
        if (i % 7 == 0) {
            printf("First number divisible by 7: %d\n", i);
            break;  // Exit the loop
        }
    }
    
    // Continue statement
    printf("\nContinue Example - Print odd numbers from 1 to 20:\n");
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            continue;  // Skip even numbers
        }
        printf("%d ", i);
    }
    printf("\n");
    
    // Nested loops with break
    printf("\nNested Loop with Break:\n");
    for (i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i == j) {
                printf("\nBreaking at i=%d, j=%d\n", i, j);
                break;
            }
            printf("(%d,%d) ", i, j);
        }
    }
    
    return 0;
}
