/*
 * Constants in C
 * Demonstrates different ways to define constants
 */

#include <stdio.h>

#define PI 3.14159  // Using #define preprocessor

int main() {
    // Using const keyword
    const int MAX_SIZE = 100;
    const float GRAVITY = 9.8;
    
    printf("PI: %.5f\n", PI);
    printf("Max Size: %d\n", MAX_SIZE);
    printf("Gravity: %.2f m/s^2\n", GRAVITY);
    
    // Trying to modify a constant will cause compilation error
    // MAX_SIZE = 200;  // This would cause an error
    
    return 0;
}
