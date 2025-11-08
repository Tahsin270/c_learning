/*
 * Array Basics
 * Demonstrates array declaration, initialization, and access
 */

#include <stdio.h>

int main() {
    // Array declaration and initialization
    int numbers[5] = {10, 20, 30, 40, 50};
    
    // Accessing array elements
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    
    // Calculating sum and average
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n\n", (float)sum / 5);
    
    // Taking input in array
    int arr[5];
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Finding maximum and minimum
    int max = arr[0], min = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("\nMaximum: %d\n", max);
    printf("Minimum: %d\n", min);
    
    return 0;
}
