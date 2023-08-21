#include<bits/stdc++.h>

using namespace std;

template <typename N> class Node{

public:
    N value;
    Node* next;
    Node* prev;

    Node(N val){
        value=val;
        next = NULL;
        prev = NULL;
    }
};

template <typename S> Stack {
    Node <S> *head;
    Node <S> *top;
    int count = 0;

public:

    Stack(){
        head = NULL;
        top = NULL;
    }


    // push
    void push(int val){

        Node* newNode = new Node(val);

        if(head==NULL){
          head = top = newNode;
          count ++;
          return;
        }
        top->next=newNode;
        newNode-> prev=top;
        top = newNode;
        count ++;

    }

    // pop
    int pop(){
       Node* delNode;
        delNode = top;
        int chk;
        if(head == NULL){
            cout << "Stack Underflow"<< endl;
        }

        if(top==head){
            head = top = NULL;
        }
        else{
            top = delNode->prev;
            top->next = NULL;
        }

        chk = delNode->value;
        delete delNode;
        count --;
        return chk;
    }

    //empty
    bool empty(){
        if(head==NULL){
            return true;
        }
        else{
            return false;
        }
    }

    // size
    int size(){
        return count;

    }

    //top
    int Top(){
        int chk;
        if(top==NULL){
            cout << "Stack Underflow | There is no Element in Top" << endl;
            chk = -1;
        }
        else{
            chk = top->value;

        }
        return chk;
    }



};



