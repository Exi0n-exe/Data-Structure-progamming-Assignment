//Write a program in C to insert a new node at any position in a doubly linked list
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node* createNode(int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}

void insertNode(struct Node** head, int data, int position) {
    int k = 1;
    struct Node* p, *q, *new_node;
    new_node = createNode(data);
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    p = *head;
    if (position == 1) {
        new_node->next = *head;
        (*head)->prev = new_node;
        *head = new_node;
        return;
    }
    while ((p != NULL) && (k < position)) {
        k++;
        q = p;
        p = p->next;
    }
    if (p == NULL) {
        q->next = new_node;
        new_node->prev = q;
        return;
    }
    new_node->next = p;
    new_node->prev = q;
    q->next = new_node;
    p->prev = new_node;
}

void printList(struct Node* head) {
    struct Node* last;
    printf("Forward Traversal using next pointer\n");
    while (head != NULL) {
        printf("%d ", head->data);
        last = head;
        head = head->next;
    }
    printf("\nBackward Traversal using prev pointer\n");
    while (last != NULL) {
        printf("%d ", last->data);
        last = last->prev;
    }
}

void main() {
    struct Node* head = NULL;
    insertNode(&head, 2, 1);
    insertNode(&head, 3, 2);
    insertNode(&head, 4, 1);
    insertNode(&head, 5, 2);
    printf("Created DLL is: ");
    printList(head);
}