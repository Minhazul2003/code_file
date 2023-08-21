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

