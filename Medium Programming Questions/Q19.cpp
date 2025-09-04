#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* head=NULL;
void deleteValue(int value) {
    if (head==NULL) {
        cout << endl << "ERROR, EMPTY LIST" << endl;
    }

    if (head->data==value) {
        head=head->next;
        cout<<endl<<"Deleted Node Value: "<<value<<endl;
    }

    Node* temp=head;
    while (temp->next!=NULL && temp->next->data!=value) {
        temp=temp->next;
    }
    if (temp->next!=NULL) {
        Node* nodeToDelete=temp->next;
        temp->next=nodeToDelete->next;
        delete nodeToDelete;
        cout << endl<<"Deleted Node Value: "<<value<<endl;
    }else {
        cout << endl << "ERROR, NOT FOUND" << endl;
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
    display();
    deleteValue(20);
    display();
    return 0;
}
