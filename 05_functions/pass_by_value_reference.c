/*
 * Pass by Value and Pass by Reference
 * Demonstrates different parameter passing methods
 */

#include <stdio.h>

// Pass by value - changes don't affect original variable
void passByValue(int x) {
    x = x + 10;
    printf("Inside passByValue: x = %d\n", x);
}

// Pass by reference - changes affect original variable
void passByReference(int *x) {
    *x = *x + 10;
    printf("Inside passByReference: x = %d\n", *x);
}

// Swap using pointers (pass by reference)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num = 5;
    
    // Pass by value
    printf("Before passByValue: num = %d\n", num);
    passByValue(num);
    printf("After passByValue: num = %d\n\n", num);
    
    // Pass by reference
    printf("Before passByReference: num = %d\n", num);
    passByReference(&num);
    printf("After passByReference: num = %d\n\n", num);
    
    // Swap example
    int a = 10, b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;
}
