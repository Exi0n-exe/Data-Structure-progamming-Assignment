//Write a program in C to insert a node at any position in a circular linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head = NULL;

void insertNode(int data, int position) {
  struct Node *newNode, *p;
  int k = 1;
  
  newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;
  
  if (position == 1) {
    p = head;
    while (p->next != head) {
      p = p->next;
    }
    p->next = newNode;
    newNode->next = head;
    head = newNode;
  } else {
    p = head;
    while (k < position-1 && p != NULL) {
      p = p->next;
      k++;
    }
    if (p == NULL) {
      printf("Position does not exist\n");
    } else {
      newNode->next = p->next;
      p->next = newNode;
    }
  }
}

void printList() {
  struct Node *temp = head;
  
  if (head != NULL) {
    do {
      printf("%d ", temp->data);
      temp = temp->next;
    } while (temp != head);
  }
  printf("\n");
}

void main() {
  int n, i, data, position;
  
  printf("Enter the number of nodes: ");
  scanf("%d", &n);
  
  for (i = 0; i < n; i++) {
    printf("Enter node %d: ", i+1);
    scanf("%d", &data);
    if (i == 0) {
      head = (struct Node*)malloc(sizeof(struct Node));
      head->data = data;
      head->next = head;
    } else {
      insertNode(data, i+1);
    }
  }
  
  printf("Enter the position to insert new node: ");
  scanf("%d", &position);
  printf("Enter the data for new node: ");
  scanf("%d", &data);
  insertNode(data, position);
  
  printf("Circular Linked List: ");
  printList();
  
}
