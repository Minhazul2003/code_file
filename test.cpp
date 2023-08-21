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

void Insert_head(Node * &head, int val){

    Node * prev_head = head;
    head = new Node(val);
    head->next = prev_head;

}
void Insert_tail(Node * &head, int val){

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
     int c=0;
     while(temp!=NULL){
        if(c<0)
        cout<< temp->val << "-> ";
        temp = temp->next;
     }

}


int main(){
    Node * head = new Node(5);
    Node * a = new Node(7);
    Node * b = new Node(10);
    Node * c = new Node(13);

    head->next = a;
    a->next = b;
    b->next = c;

    cout<< "Before Insart: ";
    print(head);
    cout<< endl;

    cout<< "After Insart Head: ";
    Insert_head(head, 3);
    print(head);
    cout<< endl;
    cout<< "After Insart Head: ";
    Insert_tail(head, 17);
    print(head);
    return 0;
}
