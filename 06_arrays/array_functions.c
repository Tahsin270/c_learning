/*
 * Array and Functions
 * Demonstrates passing arrays to functions
 */

#include <stdio.h>

// Function to display array
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to find sum of array elements
int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to reverse an array
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to sort array (bubble sort)
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[] = {5, 2, 8, 1, 9, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    displayArray(numbers, size);
    
    printf("Sum: %d\n\n", arraySum(numbers, size));
    
    reverseArray(numbers, size);
    printf("After reverse: ");
    displayArray(numbers, size);
    
    sortArray(numbers, size);
    printf("After sorting: ");
    displayArray(numbers, size);
    
    return 0;
}
