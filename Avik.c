#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>

struct item{
    char name[100];
    float price;
    int food_Id_no;
    struct item *next;
    struct item *prev;
};


int customer_id=1;
struct item*head;
struct item*last;
int today_customer=0;
float total_income=0;


struct order_history{
    int customer_id;
    int item[10][2];
    float amount;
    float date[11];
    struct order_history*prev;
    struct order_history*next;
};



struct order_history*head1;
struct order_history*last1;

struct item* getnewNode(char a[],float p,int fin){
    struct item*temp = malloc(sizeof(struct item));

    temp->food_Id_no=fin;
    strcpy(temp->name,a);
    temp->price=p;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
}



void insert(char n[],float p,int fin){
    struct item*temp1=getnewNode(n,p,fin);
    if(head==NULL)
    {
        head=temp1;
        last=temp1;
    }
    else
    {
        temp1->prev=last;
        last->next=temp1;
        last=temp1;
    }
}


struct order_history*getnewNode_history(){
    struct order_history*temp = malloc(sizeof(struct order_history));
    temp->next = temp->prev = NULL;
    return (temp);
}



void display()
{
    printf("               -------                    \n");
    printf("                 Menu                    \n");
    printf("               -------                    \n");
    printf(" INDEX       ITEM NAME      PRICE       RATING\n");

    struct item* temp=head;
    if(head==NULL)
    {
        printf("Empty");
    }
    while (temp!=NULL)
    {
        printf("%d\t%s\t%f\t%f\n",temp->food_Id_no,temp->name,temp->price,temp->rating);
        temp=temp->next;
    }
    printf("--------------------------------------------------\n");
}



//int login()
//{
//    char username[20];
//    char userpass[11];
//    int i;
//    printf("Enter your User Name :");
//    scanf("%s",username);
//    printf("Enter your Password :");
//    for(i=0; i<10; i++)
//    {
//        userpass[i]=getch();
//        printf("*");
//    }
//    userpass[i]='\0';
//    if(!strcmp(username,"cse@gmail.com") && !strcmp(userpass,"1234567"))
//    {
//        printf("\n\n Logged in successfully\n");
//        return 1;
//    }
//    else
//    {
//        printf("\n\n Incorrect username or password\n");
//        return 0;
//    }
//}

void order (){
    int a  [10][2];
    int n, j=0, i=0;

    do{
        printf("Enter the food id number of item and its quantity");
        for(i=0; i<2; i++){
            scanf("%d",&a[j][i]);
        }
        j++;
        printf("You want more item\n1. yes\n2.no");
        scanf("%d",&n);
    }while(n==1);

    float total_amount=0.0;
    char name[25];
    char date[10];
    printf("Enter your name :");
    scanf("%s",&name);
    printf("Enter todays date :");
    scanf("%s",&date);

    int k=0;
    printf("\n--------------------------------------------------\n");
    printf("                      Bill                      \n ");

    printf("Name :%s\n",name);
    printf("Date :%s\n",date);

    for(k=0; k<j; k++)
    {
        struct item*temp=head;
        while(temp->food_Id_no!=a[k][0])
        {
            temp=temp->next;
        }
        printf("\n--------------------------------------------------\n");
        printf("%d\n",temp->food_Id_no);
        printf("%s\n",temp->name);
        printf("%d\n",a[k][1]);
        printf("%f\n",(a[k][1]*(temp->price)));
        total_amount+=(a[k][1]*(temp->price));
    }
    printf("-----------------------------------------------------\n");
    printf("\nTotal payble amount is:-\t\t%f\n",total_amount);
    printf("-----------------------------------------------------\n");


    struct order_history* temp2 = getnewNode_history();
    temp2->amount=total_amount;
    temp2->customer_id=customer_id++;

    int o,t;
    for(o=0; o<j; o++){
        for(t=0; t<2; t++){
            temp2->item[o][t]=a[o][t];
        }
    }
    if(head1=NULL)
    {
        head1=last1=temp2;
    }
    else
    {
        last1->next=temp2;
        temp2->prev=last1;
        last1=temp2;
    }
    strcpy(temp2->date,date);
    today_customer++;
    total_income+=total_amount;
}
void display_rd_history()
{
    printf("                      ------------                \n");
    printf("\n-------------------Order History-----------------\n");
    printf("                      ------------                \n");
    printf("SR_NO    DATE    TOTAL AMOUNT\n");
    struct order_history* temp=head1;
    if(head1=NULL)
    {
        printf("EMPTY");
    }
    while(temp!=NULL)
    {
        printf("%d\t%s\t%f\t\n",temp->customer_id,temp->date,temp->amount);
        temp=temp->next;
    }
}
main()
{
    head=NULL;
    last=NULL;
    insert("Pizza",150.23,1);
    insert("Pasta",320.37,2);
    insert("Cold coffee",120,3);
    insert("Hot coffee",60,4);
    insert("Crispy chicken",222.34,5);
    insert("Sausage",180.00,6);
    insert("Burger",160.00,7);
    insert("Soft drinks",60,8);
    int choice;
    do
    {
        printf('\n-----------------------------------------------------');
        printf("\n1......FOOD PART");
        printf("\n2......ADMIN PANEL");
        printf("\n3......EXIT");
        printf("\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("");
            int ex;
            do
            {
                printf("1.   FOOD LIST\n2.     ORDER\n");
                int n;
                scanf("%d",&n);
                switch(n)
                {
                case 1:
                    Display();
                    break;
                case 2:
                    order();
                    break;
                }
                printf("1.FOOD PART\n2.MAIN MENU\n");
                scanf("%d",&ex);
            }
            while (ex==1);
            break;


        case 2:
            printf("\n");
            int y=login();
            int x;
            if(y==1)
            {
                do
                {
                    printf("--------------------------------------------\n");
                    printf("1.    ADD NEW DISH\n");
                    printf("2.   Today's total income\n");
                    printf("3.   TODAY's TOTAL NUMBER OF CUSTOMER\n");
                    printf("4.    ORDER HISTORY\n");
                    printf("5.    LIST OF ITEMS\n");
                    printf("--------------------------------------------\n");
                    int de;
                    scanf("%d",&de);
                    switch(de)
                    {
                    case 1:
                        printf("");
                        float q;
                        int fin;
                        char v[100];
                        printf("Enter the name of item");
                        scanf("%s",v);
                        printf("Enter the name of item");
                        scanf("%f",&q);
                        printf("Enter the name of item");
                        scanf("%d",&fin);

                        insert(v,q,fin);
                        printf("------------------------------------------------\n");
                        printf("      NEW DISH ADDED SUCESSFULLY..........\n");
                        printf("------------------------------------------------\n");
                        printf("\n");
                        break;
                    case 2:
                        printf("------------------------------------------------\n");
                        printf("      Today's total income is:-%f\n",total_income);
                        printf("------------------------------------------------\n");
                        break;
                    case 3:
                        printf("------------------------------------------------\n");
                        printf("      TODAY's TOTAL NUMBER OF CUSTOME VISITED ID:-%d\n",today_customer);
                        printf("------------------------------------------------\n");
                        break;
                    case 4:
                        printf("------------------------------------------------\n");
                        printf("      ORDER SUMMARY");
                        printf("------------------------------------------------\n");
                        display_rd_history();
                        printf("\n");
                        break;
                    case 5:
                        printf("\n");
                        Display();
                        break;
                    }
                }

            }

        }

    }
}
