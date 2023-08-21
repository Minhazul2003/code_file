#include<bits/stdc++.h>
using namespace std;
class Node{;
public:
    int val;
    Node * next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }


};

void Insert(Node * &head, int val){

    Node * newNode = new Node(val);
    Node * prev_head = head;

    Node * temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;

}

void deleat(Node *head, int M, int N)
{
    Node *curr = head, *t;
    int count;
    while (curr)
    {
        for (count = 1; count < M &&
                curr!= NULL; count++)
            curr = curr->next;

        if (curr == NULL)
            return;

        t = curr->next;
        for (count = 1; count<=N && t!= NULL; count++)
        {
            Node *temp = t;
            t = t->next;
            free(temp);
        }

        curr->next = t;

        curr = t;
    }
}



void print(Node * head){
    Node * temp = head;
     while(temp->next!=NULL){
        cout<< temp->val << " -> ";
        temp = temp->next;
     }
     cout<< temp->val;

}

int main(){
    int a, b, c, d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    Node * head = new Node(d);
    for(int i=1; i<a; i++){
        cin>> d;
          Insert(head, d);

    }

    print(head);
    cout<< endl;
    deleat(head, b, c);
    print(head);

    return 0;
}


