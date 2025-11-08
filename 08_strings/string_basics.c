/*
 * String Basics
 * Demonstrates string declaration and basic operations
 */

#include <stdio.h>
#include <string.h>

int main() {
    // String declaration and initialization
    char str1[50] = "Hello";
    char str2[] = "World";
    char str3[50];
    
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    
    // String input
    printf("\nEnter your name: ");
    scanf("%s", str3);  // Reads until space
    printf("Hello, %s!\n", str3);
    
    // Reading string with spaces using fgets
    char fullName[100];
    printf("Enter your full name: ");
    getchar();  // Consume newline
    fgets(fullName, sizeof(fullName), stdin);
    printf("Full name: %s", fullName);
    
    // String length
    printf("\nLength of str1: %lu\n", strlen(str1));
    
    // String copy
    strcpy(str3, str1);
    printf("After strcpy, str3: %s\n", str3);
    
    // String concatenation
    strcat(str1, " ");
    strcat(str1, str2);
    printf("After strcat, str1: %s\n", str1);
    
    // String comparison
    char str4[] = "Hello";
    char str5[] = "World";
    if (strcmp(str4, str5) == 0) {
        printf("\nStrings are equal\n");
    } else {
        printf("\nStrings are not equal\n");
    }
    
    return 0;
}
