/*
 * File Operations - Writing
 * Demonstrates writing to files
 */

#include <stdio.h>

int main() {
    FILE *fp;
    
    // Writing to file using fprintf
    fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(fp, "Hello, File I/O!\n");
    fprintf(fp, "This is line 2\n");
    fprintf(fp, "Number: %d\n", 42);
    
    fclose(fp);
    printf("Data written to output.txt\n\n");
    
    // Writing character by character
    fp = fopen("chars.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    char str[] = "Character by character";
    for (int i = 0; str[i] != '\0'; i++) {
        fputc(str[i], fp);
    }
    
    fclose(fp);
    printf("Characters written to chars.txt\n\n");
    
    // Appending to file
    fp = fopen("output.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(fp, "This line is appended\n");
    fclose(fp);
    printf("Data appended to output.txt\n");
    
    return 0;
}
