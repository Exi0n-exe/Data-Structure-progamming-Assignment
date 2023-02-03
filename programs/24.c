//C program to demonstrate queues using Dynamic Arrays
#include<stdio.h>
#include<stdlib.h>
 
#define MAX_SIZE 10
 
int queue[MAX_SIZE];
int front = -1, rear = -1;
 
void insert(int data)
{
    if (rear == MAX_SIZE-1)
        printf("\nQueue is full");
    else
    {
        if (front == -1)
            front = 0;
        queue[++rear] = data;
    }
}
 
void delete()
{
    if (front == -1 || front > rear)
    {
        printf("\nQueue is empty");
        return;
    }
    else
    {
        printf("\nDeleted element: %d", queue[front++]);
    }
}
 
void display()
{
    int i;
    if (front == -1)
        printf("\nQueue is empty");
    else
    {
        printf("\nQueue elements are:\n");
        for (i=front; i<=rear; i++)
            printf("%d\t", queue[i]);
    }
}
 
void main()
{
    int data, choice;
    while (1)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: printf("\nEnter the element to be inserted: ");
                    scanf("%d", &data);
                    insert(data);
                    break;
            case 2: delete();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("\nWrong choice");
        }
    }
}
