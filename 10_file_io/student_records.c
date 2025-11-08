/*
 * File Operations - Student Records
 * Practical example of file I/O with structures
 */

#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float marks;
} Student;

void writeStudents() {
    FILE *fp = fopen("students.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    Student students[3] = {
        {1, "Alice Johnson", 85.5},
        {2, "Bob Smith", 92.0},
        {3, "Charlie Brown", 78.5}
    };
    
    fwrite(students, sizeof(Student), 3, fp);
    fclose(fp);
    printf("Student records written successfully!\n\n");
}

void readStudents() {
    FILE *fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("Error: File not found!\n");
        return;
    }
    
    Student s;
    printf("Student Records:\n");
    printf("%-5s %-20s %-10s\n", "ID", "Name", "Marks");
    printf("--------------------------------------\n");
    
    while (fread(&s, sizeof(Student), 1, fp) == 1) {
        printf("%-5d %-20s %-10.2f\n", s.id, s.name, s.marks);
    }
    
    fclose(fp);
}

void addStudent() {
    FILE *fp = fopen("students.dat", "ab");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    Student s;
    printf("\nEnter student details:\n");
    printf("ID: ");
    scanf("%d", &s.id);
    printf("Name: ");
    getchar();  // Consume newline
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0;  // Remove newline
    printf("Marks: ");
    scanf("%f", &s.marks);
    
    fwrite(&s, sizeof(Student), 1, fp);
    fclose(fp);
    printf("Student added successfully!\n");
}

int main() {
    int choice;
    
    printf("Student Management System\n");
    printf("1. Write sample students\n");
    printf("2. Display all students\n");
    printf("3. Add new student\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            writeStudents();
            break;
        case 2:
            readStudents();
            break;
        case 3:
            addStudent();
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}
