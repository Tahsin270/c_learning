/*
 * While and Do-While Loops
 * Demonstrates iteration with while loops
 */

#include <stdio.h>

int main() {
    int i, n;
    
    // While loop
    printf("While Loop - Numbers from 1 to 5:\n");
    i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
    
    // Factorial using while
    printf("Enter a number for factorial: ");
    scanf("%d", &n);
    
    long factorial = 1;
    i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }
    printf("Factorial of %d is %ld\n\n", n, factorial);
    
    // Do-while loop
    printf("Do-While Loop - Menu example:\n");
    int choice;
    do {
        printf("\n1. Say Hello\n");
        printf("2. Say Goodbye\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Hello!\n");
                break;
            case 2:
                printf("Goodbye!\n");
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 3);
    
    return 0;
}
