#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;
void insert(int value) {
    Node* newNode =new Node();
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

int search(int value) {
    Node* temp=head;
    while (temp!=NULL) {
        if (temp->data==value)
            return true;
        temp=temp->next;
    }
    return false;
}

void display() {
    Node* temp=head;
    while (temp!=NULL) {
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();

    int searchValue = 40;
    if(search(searchValue)) {
        cout << searchValue << " found in the list" << endl;
    } else {
        cout << searchValue << " not found in the list" << endl;
    }
    return 0;
}