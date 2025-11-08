/*
 * Structures and Functions
 * Demonstrates passing structures to functions
 */

#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

// Function to display employee (pass by value)
void displayEmployee(struct Employee e) {
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n\n", e.salary);
}

// Function to modify employee (pass by reference)
void giveRaise(struct Employee *e, float percentage) {
    e->salary += e->salary * percentage / 100;
}

// Function to return structure
struct Employee createEmployee(int id, char name[], float salary) {
    struct Employee e;
    e.id = id;
    strcpy(e.name, name);
    e.salary = salary;
    return e;
}

int main() {
    struct Employee emp1 = {101, "Alice", 50000.0};
    
    printf("Before raise:\n");
    displayEmployee(emp1);
    
    // Give 10% raise
    giveRaise(&emp1, 10.0);
    
    printf("After 10%% raise:\n");
    displayEmployee(emp1);
    
    // Create new employee
    struct Employee emp2 = createEmployee(102, "Bob", 45000.0);
    printf("New employee:\n");
    displayEmployee(emp2);
    
    return 0;
}
