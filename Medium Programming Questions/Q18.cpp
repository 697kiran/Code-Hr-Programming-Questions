#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head = NULL;

void insertBeginning(int value) {
    Node* newNode=new Node;
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

void insertEnd(int value) {
    Node* newNode=new Node;
    newNode->data=value;
    newNode->next=NULL;

    if (head==NULL) {
        head=newNode;
    }
    else {
        Node* temp=head;
        while (temp->next!=NULL) {
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

void insertPosition(int value, int index) {
    Node* newNode=new Node;
    newNode->data=value;
    newNode->next=NULL;

    if (index==0) {
        newNode->next=head;
        head=newNode;
    }
    else {
        Node* temp=head;
        for (int i=0;i<index-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}

void display() {
    Node* temp = head;
    cout << "List: ";
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(40);
    insertEnd(50);
    display(); // Initial list

    cout << "\nInserting 5 at the beginning:" << endl;
    insertBeginning(5);
    display();

    cout << "\nInserting 30 at position 4:" << endl;
    insertPosition(30, 4);
    display();

    return 0;
}