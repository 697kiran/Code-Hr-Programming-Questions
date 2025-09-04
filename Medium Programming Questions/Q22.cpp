#include <iostream>
using namespace std;

class SimpleStack {
public:
    int arr[100];
    int top;
    SimpleStack() {
        top = -1;
    }

    void push(int value) {
        if (top>=99) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[top++]=value;
        cout<<"Pushed "<<value<<endl;
    }

    void pop() {
        if(top < 0) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Popped " << arr[top] << endl;
        top--;
    }
    void display() {
        if(top < 0) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack: ";
        for(int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

class SimpleQueue {
public:
    int arr[100];
    int front, rear;

    SimpleQueue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if(rear >= 99) {
            cout << "Queue is full" << endl;
            return;
        }
        if(front == -1) {
            front = 0;
        }
        rear++;
        arr[rear] = value;
        cout << "Added " << value << " to queue" << endl;
    }

    void dequeue() {
        if(front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Removed " << arr[front] << " from queue" << endl;
        front++;
    }

    void display() {
        if(front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue: ";
        for(int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    SimpleStack s;
    s.push(10);
    s.push(20);
    s.display();
    s.pop();
    s.display();

    cout << "\n";

    SimpleQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.display();
    q.dequeue();
    q.display();

    return 0;
}