//Write a program in C to search an existing element in a singly linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head; // Global variable, head of linked list

// Function to create a new node
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end of the linked list
void insertNode(int data) {
    struct Node *newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to search an existing element in a singly linked list
void searchNode(int data) {
    struct Node *temp = head;
    int found = 0;
    while (temp != NULL) {
        if (temp->data == data) {
            printf("Element %d found in linked list\n", data);
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if (!found) {
        printf("Element %d not found in linked list\n", data);
    }
}

void main() {
    int i, n, data;
    printf("Enter number of elements in linked list: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &data);
        insertNode(data);
    }
    printf("Enter element to search in linked list: ");
    scanf("%d", &data);
    searchNode(data);
}
