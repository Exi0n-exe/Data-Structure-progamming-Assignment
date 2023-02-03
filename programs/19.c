//C program to declare, initialize an union, example of union
#include <stdio.h>
#include <string.h>

union employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    union employee e1;

    e1.id = 1001;
    printf("Employee ID: %d\n", e1.id);

    strcpy(e1.name, "John");
    printf("Employee Name: %s\n", e1.name);

    e1.salary = 35000.00;
    printf("Employee Salary: %.2f\n", e1.salary);

    return 0;
}
