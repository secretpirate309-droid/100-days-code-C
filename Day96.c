#include <stdio.h>

//Create Employee structure with nested Date structure for joining date and print details.




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
    Employee emp1;

    printf("Enter Employee Name: ");
    scanf("%49s", emp1.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp1.empId);

    printf("Enter Salary: ");
    scanf("%f", &emp1.salary);

    printf("Enter Joining Date (Day Month Year): ");
    scanf("%d %d %d", 
          &emp1.joiningDate.day, 
          &emp1.joiningDate.month, 
          &emp1.joiningDate.year);

    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.empId);
    printf("Salary: %.2f\n", emp1.salary);
    printf("Joining Date: %d/%d/%d\n", 
           emp1.joiningDate.day, 
           emp1.joiningDate.month, 
           emp1.joiningDate.year);
    printf("------------------------\n");

    return 0;
}