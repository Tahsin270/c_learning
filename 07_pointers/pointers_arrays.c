/*
 * Pointers and Arrays
 * Demonstrates relationship between pointers and arrays
 */

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    
    // Array name as pointer
    printf("Using array notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    printf("\nUsing pointer notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(arr + %d) = %d\n", i, *(arr + i));
    }
    
    printf("\nUsing pointer variable:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }
    
    // Pointer incrementing
    printf("\nPointer incrementing:\n");
    ptr = arr;
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
    
    return 0;
}
