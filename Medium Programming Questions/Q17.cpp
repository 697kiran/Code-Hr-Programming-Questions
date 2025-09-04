#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head=nullptr;

int Insert(int data) {
    Node* newNode=new Node();
    newNode->data=data;
    newNode->next=nullptr;

    if(head==nullptr) {
        head=newNode;
    }
    else {
        Node* temp=head;
        while(temp->next!=nullptr) {
            temp=temp->next;
        }
        temp->next=newNode;
    }
    return 1;
}

void display() {
    Node* temp=head;
    while (temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main() {
    Insert(10);
    Insert(20);
    Insert(30);
    Insert(40);
    display();
    return 0;
}