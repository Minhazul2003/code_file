#include<bits/stdC++.h>

using namespace std;

class Node{
    public:

    int value;
    Node* next;

    Node(int val) {
    value = val;
     next=NULL;
    }
};
class Queue{
    Node* front;
    Node* rear;

    public:

    Queue(){
    front = NULL;
    rear = NULL;
    }

    // enqueue
    void push (int val){
        Node *newNode = new Node (val);
        if(front == NULL){
            front = newNode;
            rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = rear->next;

    }

    //deque
    int pop(){
        int chk = -1;
        if(rear == NULL){
            cout<<"Queue Underflow | There is no element in the Queue" << endl;
            return -1;
        }
        Node* delNode;
        delNode = front;
        front = front->next;
        if (front == NULL){
            rear = NULL;
        }
        chk = delNode->value;
        delete delNode;
        return chk;

    }


    //peek
    int front(){
        int chk;
        chk = front->value;
        return chk;
    }
    int back(){
        int chk;
        chk = rear->value;
        return chk;
    }

    //empty
    bool empty(){
        if (front == NULL && rear == NULL)
            return true;

            else
            return false;
        }


};


