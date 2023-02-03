//C program to demonstrate stacks using Dynamic Arrays
#include <stdio.h>
#include <stdlib.h>

int *stack, top = -1, size;

void push(int data) {
    if (top == size - 1) {
        printf("Stack overflow\n");
        return;
    }
    top++;
    stack[top] = data;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    int data = stack[top];
    top--;
    return data;
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    int i;
    printf("Elements in the stack: ");
    for (i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}

void main() {
    int choice, data;
    printf("Enter the size of the stack: ");
    scanf("%d", &size);
    stack = (int *) malloc(size * sizeof(int));
    do {
        printf("\nEnter your choice\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the data to be inserted: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                data = pop();
                if (data != -1)
                    printf("The popped element is %d\n", data);
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);
}
