/*
 * Function Basics
 * Demonstrates function declaration, definition, and calling
 */

#include <stdio.h>

// Function declarations (prototypes)
void greet();
int add(int a, int b);
float calculateAverage(float a, float b, float c);

int main() {
    // Calling functions
    greet();
    
    int sum = add(10, 20);
    printf("Sum: %d\n", sum);
    
    float avg = calculateAverage(80.5, 90.0, 85.5);
    printf("Average: %.2f\n", avg);
    
    return 0;
}

// Function definitions
void greet() {
    printf("Hello from greet function!\n");
}

int add(int a, int b) {
    return a + b;
}

float calculateAverage(float a, float b, float c) {
    return (a + b + c) / 3;
}
