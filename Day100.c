#include<stdio.h>

//Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[50];
    int empId;
    float salary;
    Date joiningDate; 
} Employee;

int main() {
    Employee *e_ptr;

    e_ptr = (Employee *)malloc(sizeof(Employee));

    if (e_ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("--- Input Employee Details ---\n");
    printf("Name ID Salary Date(D M Y): ");
    
    if (scanf("%49s %d %f %d %d %d", 
              e_ptr->name, &e_ptr->empId, &e_ptr->salary, 
              &e_ptr->joiningDate.day, &e_ptr->joiningDate.month, &e_ptr->joiningDate.year) != 6) {
        printf("Invalid input.\n");
        free(e_ptr);
        return 1;
    }

    
    e_ptr->salary = e_ptr->salary * 1.10;
    e_ptr->joiningDate.year = 2024;

    printf("\n--- Employee Details (MODIFIED using ->) ---\n");
    printf("Name: %s\n", e_ptr->name);
    printf("ID: %d\n", e_ptr->empId);
    printf("New Salary (10%% Raise): %.2f\n", e_ptr->salary);
    printf("Joining Date (Updated Year): %d/%d/%d\n", 
           e_ptr->joiningDate.day, 
           e_ptr->joiningDate.month, 
           e_ptr->joiningDate.year);
    printf("-------------------------------------------\n");

    free(e_ptr);

    return 0;
}