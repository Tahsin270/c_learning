/*
 * String Functions
 * Demonstrates various string manipulation functions
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // strcat - concatenate strings
    char s1[50] = "Hello";
    char s2[] = " World";
    strcat(s1, s2);
    printf("strcat: %s\n", s1);
    
    // strcpy - copy string
    char s3[50];
    strcpy(s3, s1);
    printf("strcpy: %s\n", s3);
    
    // strlen - get string length
    printf("strlen: %lu\n", strlen(s1));
    
    // strcmp - compare strings
    printf("strcmp(\"Hello\", \"World\"): %d\n", strcmp("Hello", "World"));
    
    // strrev - reverse string (custom implementation)
    char s4[] = "Programming";
    int len = strlen(s4);
    printf("\nOriginal: %s\n", s4);
    for (int i = 0; i < len / 2; i++) {
        char temp = s4[i];
        s4[i] = s4[len - 1 - i];
        s4[len - 1 - i] = temp;
    }
    printf("Reversed: %s\n", s4);
    
    // Character functions
    printf("\nCharacter Functions:\n");
    char ch = 'a';
    printf("toupper('%c'): %c\n", ch, toupper(ch));
    printf("isupper('%c'): %d\n", ch, isupper(ch));
    printf("islower('%c'): %d\n", ch, islower(ch));
    printf("isdigit('5'): %d\n", isdigit('5'));
    printf("isalpha('a'): %d\n", isalpha('a'));
    
    return 0;
}
