/*
 * Structures Basics
 * Demonstrates structure definition and usage
 */

#include <stdio.h>
#include <string.h>

// Structure definition
struct Student {
    int id;
    char name[50];
    float marks;
};

struct Point {
    int x;
    int y;
};

int main() {
    // Structure variable declaration
    struct Student s1;
    
    // Accessing structure members
    s1.id = 1;
    strcpy(s1.name, "John Doe");
    s1.marks = 85.5;
    
    printf("Student Details:\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n\n", s1.marks);
    
    // Structure initialization
    struct Student s2 = {2, "Jane Smith", 92.0};
    printf("Student 2:\n");
    printf("ID: %d, Name: %s, Marks: %.2f\n\n", s2.id, s2.name, s2.marks);
    
    // Array of structures
    struct Point points[3] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    
    printf("Points:\n");
    for (int i = 0; i < 3; i++) {
        printf("Point %d: (%d, %d)\n", i + 1, points[i].x, points[i].y);
    }
    
    return 0;
}
