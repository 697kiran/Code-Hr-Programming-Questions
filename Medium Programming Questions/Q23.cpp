#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
class SimpleStackLL {
public:
    Node* top;
    
    SimpleStackLL() {
        top = NULL;
    }
    
    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Pushed " << value << endl;
    }
    
    void pop() {
        if(top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Popped " << top->data << endl;
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    
    void display() {
        if(top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        cout << "Stack: ";
        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

class SimpleQueueLL {
public:
    Node* front;
    Node* rear;
    
    SimpleQueueLL() {
        front = NULL;
        rear = NULL;
    }
    
    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        
        if(rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Added " << value << " to queue" << endl;
    }
    
    void dequeue() {
        if(front == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Removed " << front->data << " from queue" << endl;
        Node* temp = front;
        front = front->next;
        if(front == NULL) {
            rear = NULL;
        }
        delete temp;
    }
    
    void display() {
        if(front == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        cout << "Queue: ";
        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    SimpleStackLL s;
    s.push(10);
    s.push(20);
    s.display();
    s.pop();
    s.display();
    
    cout << "\n";
    
    SimpleQueueLL q;
    q.enqueue(10);
    q.enqueue(20);
    q.display();
    q.dequeue();
    q.display();
    
    return 0;
}
