/*
 * If-Else Statement
 * Demonstrates conditional branching
 */

#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Simple if
    if (number > 0) {
        printf("%d is positive\n", number);
    }
    
    // If-else
    if (number % 2 == 0) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }
    
    // If-else if-else ladder
    if (number > 0) {
        printf("%d is positive\n", number);
    } else if (number < 0) {
        printf("%d is negative\n", number);
    } else {
        printf("%d is zero\n", number);
    }
    
    // Nested if
    if (number >= 0) {
        if (number == 0) {
            printf("The number is zero\n");
        } else {
            printf("The number is positive\n");
        }
    }
    
    return 0;
}
