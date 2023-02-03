//Passing structure in function and returning structure from function program in C
#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char name[30];
    float marks;
};

struct student inputStudent() {
    struct student s;
    printf("Enter Roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    return s;
}

void printStudent(struct student s) {
    printf("\nRoll number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

void main() {
    struct student s1 = inputStudent();
    printStudent(s1);
}
