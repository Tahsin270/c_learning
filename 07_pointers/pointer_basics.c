/*
 * Pointer Basics
 * Demonstrates pointer declaration, initialization, and dereferencing
 */

#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;  // Pointer declaration
    
    ptr = &num;  // Pointer initialization (storing address of num)
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value of ptr (address stored): %p\n", (void*)ptr);
    printf("Value pointed by ptr: %d\n", *ptr);  // Dereferencing
    
    // Changing value through pointer
    *ptr = 20;
    printf("\nAfter *ptr = 20:\n");
    printf("Value of num: %d\n", num);
    printf("Value pointed by ptr: %d\n", *ptr);
    
    // Pointer arithmetic
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;  // Array name is a pointer to first element
    
    printf("\nPointer Arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d (Address: %p)\n", i, *(p + i), (void*)(p + i));
    }
    
    return 0;
}
