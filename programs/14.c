//C program to demonstrate priority queue
#include <stdio.h>
#define MAX 10

int queue[MAX], front = -1, rear = -1;

void insert(int item, int priority) {
    int i, j;
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1 || priority < queue[front]) {
        front = (front == -1) ? 0 : front - 1;
        queue[front] = item;
    } else {
        for (i = rear; i >= 0; i--) {
            if (priority >= queue[i]) {
                queue[i + 1] = item;
                break;
            } else {
                queue[i + 1] = queue[i];
            }
        }
    }
    rear = rear + 1;
}

void delete() {
    if (front == -1) {
        printf("Queue Underflow\n");
        return;
    }
    printf("Deleted item is: %d\n", queue[front]);
    front = front + 1;
    if (front > rear) {
        front = -1;
        rear = -1;
    }
}

void display() {
    int i;
    if (front == -1) {
        printf("Queue is Empty\n");
        return;
    }
    printf("Queue is: ");
    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void main() {
    int item, priority, choice;
    while (1) {
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the item: ");
                scanf("%d", &item);
                printf("Enter its priority: ");
                scanf("%d", &priority);
                insert(item, priority);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}
