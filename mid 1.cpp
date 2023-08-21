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

void print(Node * head){
    Node * temp = head;
     while(temp->next!=NULL){
        cout<< temp->val << " -> ";
        temp = temp->next;
     }
     cout<< temp->val;

}

int main(){
    int a, b;
    cin>>a;
    cin>>b;
    Node * head = new Node(b);
    for(int i=1; i<a; i++){
        cin>> b;
        if(i%2==0){
           Insert(head, -1);
        }
        else{
          Insert(head, b);
        }

    }
    print(head);

    return 0;
}

