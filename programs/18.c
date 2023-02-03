//C program to demonstrate example of structure pointer (structure with pointer)
#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char name[30];
    float marks;
};

void main() {
    struct student s1 = {1, "John", 85.5};  // Initializing structure at the time of declaration
    struct student *ptr;
    ptr = &s1;

    printf("Roll number: %d\n", ptr->roll_no);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

}
