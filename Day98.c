#include<sdtio.h>
#include <string.h>


//Take two structs as input and check if they are identical.


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

int areEmployeesIdentical(Employee a, Employee b) {
    if (a.empId != b.empId || a.salary != b.salary) return 0;
    if (a.joiningDate.day != b.joiningDate.day || 
        a.joiningDate.month != b.joiningDate.month || 
        a.joiningDate.year != b.joiningDate.year) return 0;
    if (strcmp(a.name, b.name) != 0) return 0;
    return 1;
}

int main() {
    Employee e1, e2;

    printf("--- Input Employee 1 ---\n");
    printf("Name ID Salary Date(D M Y): ");
    scanf("%49s %d %f %d %d %d", 
          e1.name, &e1.empId, &e1.salary, 
          &e1.joiningDate.day, &e1.joiningDate.month, &e1.joiningDate.year);

    printf("\n--- Input Employee 2 ---\n");
    printf("Name ID Salary Date(D M Y): ");
    scanf("%49s %d %f %d %d %d", 
          e2.name, &e2.empId, &e2.salary, 
          &e2.joiningDate.day, &e2.joiningDate.month, &e2.joiningDate.year);

    int result = areEmployeesIdentical(e1, e2);

    printf("\n--- Comparison ---\n");
    if (result) {
        printf("Structs are IDENTICAL.\n");
    } else {
        printf("Structs are DIFFERENT.\n");
    }

    return 0;
}