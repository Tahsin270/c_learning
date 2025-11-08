/*
 * Nested Structures and Typedef
 * Demonstrates nested structures and typedef keyword
 */

#include <stdio.h>
#include <string.h>

// Using typedef
typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    int id;
    char name[50];
    Date birthDate;  // Nested structure
    float salary;
} Employee;

int main() {
    // Using typedef (no need to write 'struct' keyword)
    Employee emp;
    
    emp.id = 1;
    strcpy(emp.name, "John Doe");
    emp.birthDate.day = 15;
    emp.birthDate.month = 8;
    emp.birthDate.year = 1990;
    emp.salary = 55000.0;
    
    printf("Employee Information:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Birth Date: %02d/%02d/%d\n", 
           emp.birthDate.day, emp.birthDate.month, emp.birthDate.year);
    printf("Salary: %.2f\n\n", emp.salary);
    
    // Array of employees
    Employee employees[3] = {
        {1, "Alice", {10, 5, 1992}, 60000.0},
        {2, "Bob", {20, 12, 1988}, 55000.0},
        {3, "Charlie", {5, 3, 1995}, 50000.0}
    };
    
    printf("All Employees:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s - $%.2f\n", 
               employees[i].id, employees[i].name, employees[i].salary);
    }
    
    return 0;
}
