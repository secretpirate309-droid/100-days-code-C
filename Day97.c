#include<stdio.h>

//Store employee data in a binary file using fwrite() and read using fread().




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
    Employee emp2;
    FILE *fp;
    const char *filename = "employee.dat";

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

    fp = fopen(filename, "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(&emp1, sizeof(Employee), 1, fp);
    fclose(fp);
    printf("\nData written to %s.\n", filename);

    fp = fopen(filename, "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    fread(&emp2, sizeof(Employee), 1, fp);
    fclose(fp);

    printf("\n--- Read Details (from file) ---\n");
    printf("Name: %s\n", emp2.name);
    printf("ID: %d\n", emp2.empId);
    printf("Salary: %.2f\n", emp2.salary);
    printf("Joining Date: %d/%d/%d\n", 
           emp2.joiningDate.day, 
           emp2.joiningDate.month, 
           emp2.joiningDate.year);
    printf("--------------------------------\n");

    return 0;
}