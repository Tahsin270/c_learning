/*
 * Dynamic Memory Allocation
 * Demonstrates malloc, calloc, realloc, and free
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    // malloc - allocates uninitialized memory
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int *arr1 = (int*)malloc(n * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n\n");
    
    // calloc - allocates and initializes to zero
    int *arr2 = (int*)calloc(5, sizeof(int));
    printf("Calloc initialized array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n\n");
    
    // realloc - resize allocated memory
    printf("Resizing array to 10 elements...\n");
    arr1 = (int*)realloc(arr1, 10 * sizeof(int));
    printf("Enter 5 more elements:\n");
    for (int i = n; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("All elements: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    
    // Free allocated memory
    free(arr1);
    free(arr2);
    printf("\nMemory freed successfully!\n");
    
    return 0;
}
