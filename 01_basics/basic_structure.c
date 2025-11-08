/*
 * Basic Structure of a C Program
 * Shows the essential components
 */

#include <stdio.h>  // Preprocessor directive

// Function declaration (optional)
void greet();

// Main function - entry point of the program
int main() {
    printf("This is the main function\n");
    greet();
    return 0;  // Return 0 indicates successful execution
}

// Function definition
void greet() {
    printf("Hello from greet function!\n");
}
