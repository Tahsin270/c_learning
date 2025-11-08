/*
 * String Programs
 * Common string manipulation programs
 */

#include <stdio.h>
#include <string.h>

// Function to check if string is palindrome
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

// Function to count vowels
int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

// Function to count words
int countWords(char str[]) {
    int count = 0;
    int inWord = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    
    // Palindrome check
    printf("Enter a string to check palindrome: ");
    scanf("%s", str);
    
    if (isPalindrome(str)) {
        printf("%s is a palindrome\n\n", str);
    } else {
        printf("%s is not a palindrome\n\n", str);
    }
    
    // Count vowels
    printf("Number of vowels: %d\n\n", countVowels(str));
    
    // Count words
    printf("Enter a sentence: ");
    getchar();  // Consume newline
    fgets(str, sizeof(str), stdin);
    printf("Number of words: %d\n", countWords(str));
    
    return 0;
}
