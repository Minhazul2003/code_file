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

Node* reverseKNodes(Node* head, int k)
{
    if (!head)
        return NULL;
    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;

    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    if (next != NULL)
        head->next = reverseKNodes(next, k);

    return prev;
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
    int a, b, c;
    cin>>a;
    cin>>b;
    Node * head = new Node(b);
    for(int i=1; i<a; i++){
        cin>> b;
          Insert(head, b);

    }
    cin>>c;
    print(head);
    cout<< endl;
    head =reverseKNodes(head, c);
    print(head);

    return 0;
}

/*
9
1 2 2 4 5 6 7 8 9
4


 */
