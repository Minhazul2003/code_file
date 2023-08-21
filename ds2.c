#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int count = 0;
struct node *front = NULL, *rear = NULL;

void enqueue(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if(front == NULL && rear == NULL){
        front = rear = newNode;
        count++;
    }
    else{
        rear->next = newNode;
        rear = newNode;
        count++;
    }
}

void dequeue(){
    if(front == NULL){
        printf("There is no car!!!\n");
    }

    else{
        count--;
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }

    }

}

void printList()
{
    struct node *temp = front;
    while(temp)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n\n");
}

void printcount(){
    printf("Available Cars : %d\n", count);
}

int main(){

    int a;
    int b;
    do{
        printf("Enter your Choice:\n");
        printf("1 Entry Car\n");
        printf("2 Remove Car\n");
        printf("3 Display available Cars\n");
        printf("4 Number of available Cars\n");
        printf("5 for Exit\n");
        scanf("%d", &a);

        if(a==1){
            printf("Enter the car number: ");
            scanf("%d", &b);
            enqueue(b);
            printf("\n\n");

        }
        else if(a==2){
            dequeue();
        }
        else if(a==3){
            printList();
        }
        else if(a==4){
            printf("Number of available Cars is = %d\n", count);
        }
        else if(a==5){
            break;
        }

    }while(a!=5);

    return 0;
}
