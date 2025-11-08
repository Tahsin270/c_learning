/*
 * Pointer to Pointer
 * Demonstrates multiple levels of indirection
 */

#include <stdio.h>

int main() {
    int num = 100;
    int *ptr1;      // Pointer to int
    int **ptr2;     // Pointer to pointer to int
    
    ptr1 = &num;
    ptr2 = &ptr1;
    
    printf("Value of num: %d\n", num);
    printf("Value using *ptr1: %d\n", *ptr1);
    printf("Value using **ptr2: %d\n", **ptr2);
    
    printf("\nAddress of num: %p\n", (void*)&num);
    printf("Value in ptr1: %p\n", (void*)ptr1);
    printf("Value in ptr2: %p\n", (void*)ptr2);
    printf("Address of ptr1: %p\n", (void*)&ptr1);
    
    // Modifying value through pointer to pointer
    **ptr2 = 200;
    printf("\nAfter **ptr2 = 200:\n");
    printf("Value of num: %d\n", num);
    
    return 0;
}
