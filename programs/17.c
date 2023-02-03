//C program to create, declare and initialize structure
#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char name[30];
    float marks;
};

void main() {
    struct student s1 = {1, "John", 85.5};  // Initializing structure at the time of declaration

    printf("Roll number: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    struct student s2;  // Declaring structure variable
    s2.roll_no = 2;
    strcpy(s2.name, "Jane");
    s2.marks = 90.0;

    printf("\nRoll number: %d\n", s2.roll_no);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n", s2.marks);
}
