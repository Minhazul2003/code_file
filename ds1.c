#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
}* head, * front, * rear;


void initialize(){
    head = NULL;
    front = NULL;
    rear = NULL;

}

void insert(int item, int *count) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = item;
    newnode->next = NULL;
    if(front == NULL && rear == NULL){
        head = newnode;
        front = newnode;
        rear = newnode;
        head -> next = NULL;
        front -> next = NULL;
        rear -> next = NULL;
        *count=*count+1;
    }
    else{
        rear->next = newnode;
        rear = newnode;
        rear -> next = NULL;
        *count=*count+1;
    }


}


void delete_data(int *count){
    if(front == NULL){
        printf("There is no car to remove\n");
    }

    else{
        *count=*count-1;
        front = front->next;

        if(front == NULL){
            rear = NULL;
        }

    }

}
void printcarList()
{
    struct node *temp = front;
    while(temp->next!=NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
        printf("%d\n\n",temp->data);
}


int main(){
    initialize();
    int Choice;
    int a;
    int count=0;
    printf("Enter your Choice:\n");
    printf("1 Entry Car\n");
    printf("2 Remove Car\n");
    printf("3 Display available Cars\n");
    printf("4 Number of available Cars\n");
    printf("5 for Exit\n");
    scanf("%d", &Choice);
    while(Choice!=5){
        if(Choice==1){
            printf("Enter the car number: ");
            scanf("%d", &a);
            insert(a, &count);
            printf("\n\n");

        }
        else if(Choice==2){
            delete_data(&count);
        }
        else if(Choice==3){
            printcarList();
        }
        else if(Choice==4){
            printf("Number of available Cars is = %d\n", count);
        }
        else if(Choice==5){
            break;
        }

        else{
            printf("Please enter right Number!!!\n");
        }
        printf("Enter your Choice:\n");
        printf("1 Entry Car\n");
        printf("2 Remove Car\n");
        printf("3 Display available Cars\n");
        printf("4 Number of available Cars\n");
        printf("5 for Exit\n");
        scanf("%d", &Choice);
    }

    return 0;
}

