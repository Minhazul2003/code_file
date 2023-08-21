#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* next;
}*head;


void intialize(){
    head=NULL;
}

void insertFront(int a){
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = a;
    newNode->next = head;
    head = newNode;
}

void insertEnd(int a){
    if (head == NULL){
        printf("head cannot be null");
        return;
    }
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = a;
    newNode->next = NULL;

    struct node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}


void deleteFront(){
    head = head->next;
}


void delEnd(){
    struct node* temp = head;
    while (temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = NULL;
}

void displayList() {
    struct node* temp = head;
    while (temp->next != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
     printf("%d ", temp->data);
}
int main() {
    intialize();
    insertFront(1);
    insertEnd(2);
    insertEnd(5);
    insertEnd(6);
    insertEnd(8);
    insertEnd(3);
    displayList();
    printf("\n");
    insertFront(9);
    insertFront(10);
    displayList();
    printf("\n");
    deleteFront();
    displayList();
    printf("\n");
    deleteFront();
    displayList();
    printf("\n");

    delEnd();
    displayList();
    printf("\n");
    delEnd();
    displayList();
    printf("\n");
    return 0;
}

/*
void insertFront(struct Node** head, int data) {
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));


  newNode->data = data;
  newNode->next = (*head);
  newNode->prev = NULL;

  if ((*head) != NULL){
    (*head)->prev = newNode;
  }
  (*head) = newNode;
}

void insertAfter(struct Node* prev_node, int data) {
  if (prev_node == NULL) {
    printf("previous node cannot be null");
    return;
  }

  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  newNode->data = data;
  newNode->next = prev_node->next;
  prev_node->next = newNode;
  newNode->prev = prev_node;

  if (newNode->next != NULL)
    newNode->next->prev = newNode;
}


void insertEnd(struct Node** head, int data) {

  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;

  struct Node* temp = *head;
  if (*head == NULL) {
    newNode->prev = NULL;
    *head = newNode;
    return;
  }


  while (temp->next != NULL){
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->prev = temp;
}

void deleteNode(struct Node** head, struct Node* del_node) {
  if (*head == NULL || del_node == NULL)
    return;

  if (*head == del_node)
    *head = del_node->next;

  if (del_node->next != NULL)
    del_node->next->prev = del_node->prev;

  if (del_node->prev != NULL)
    del_node->prev->next = del_node->next;

  free(del_node);
}

void displayList(struct Node* node) {
  struct Node* last;

  while (node != NULL) {
    printf("%d->", node->data);
    last = node;
    node = node->next;
  }
  if (node == NULL)
    printf("NULL\n");
}

int main() {
  struct Node* head = NULL;

  insertEnd(&head, 5);
  insertFront(&head, 1);
  insertFront(&head, 6);
  insertEnd(&head, 9);


  insertAfter(head, 11);

  insertAfter(head->next, 15);

  displayList(head);

  deleteNode(&head, head->next->next->next->next->next);

  displayList(head);
}
*/
