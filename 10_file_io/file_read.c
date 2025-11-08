/*
 * File Operations - Reading
 * Demonstrates reading from files
 */

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    char str[100];
    
    // Reading character by character
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error: File not found!\n");
        printf("Please run file_write.c first to create the file.\n");
        return 1;
    }
    
    printf("Reading character by character:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    printf("\n");
    fclose(fp);
    
    // Reading line by line
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("\nReading line by line:\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }
    
    fclose(fp);
    
    // Reading formatted data
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("\nReading formatted data:\n");
    char line1[50], line2[50];
    int num;
    
    fscanf(fp, "%[^\n]\n", line1);
    fscanf(fp, "%[^\n]\n", line2);
    fscanf(fp, "Number: %d\n", &num);
    
    printf("Line 1: %s\n", line1);
    printf("Line 2: %s\n", line2);
    printf("Number: %d\n", num);
    
    fclose(fp);
    
    return 0;
}
