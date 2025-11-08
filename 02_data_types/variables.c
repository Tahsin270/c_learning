/*
 * Variables and Data Types in C
 * Demonstrates basic data types: int, float, double, char
 */

#include <stdio.h>

int main() {
    // Integer type
    int age = 25;
    printf("Age: %d\n", age);
    
    // Float type (single precision)
    float height = 5.9;
    printf("Height: %.1f feet\n", height);
    
    // Double type (double precision)
    double pi = 3.14159265359;
    printf("Pi: %.10f\n", pi);
    
    // Character type
    char grade = 'A';
    printf("Grade: %c\n", grade);
    
    // Short and long integers
    short smallNum = 100;
    long bigNum = 1000000L;
    printf("Small: %d, Big: %ld\n", smallNum, bigNum);
    
    return 0;
}
