/*
 * For Loop
 * Demonstrates iteration with for loop
 */

#include <stdio.h>

int main() {
    int i, n, sum = 0;
    
    // Basic for loop
    printf("Numbers from 1 to 10:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Sum of first n natural numbers
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers: %d\n\n", n, sum);
    
    // Multiplication table
    printf("Multiplication table of 5:\n");
    for (i = 1; i <= 10; i++) {
        printf("5 x %d = %d\n", i, 5 * i);
    }
    
    // Nested for loop - pattern
    printf("\nPattern:\n");
    for (i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
