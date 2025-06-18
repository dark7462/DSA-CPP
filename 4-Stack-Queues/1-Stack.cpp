#include<bits/stdc++.h>
using namespace std;
// Stack implementation using array
#define MAX 1000
class Stack {
    int top;
    int arr[MAX];
public:
    Stack() { top = -1; }
    
    bool push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
            return false;
        }
        arr[++top] = x;
        return true;
    }
    
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }
    
    int peek() {
        if (top < 0) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }
    
    bool isEmpty() {
        return top < 0;
    }
};

// Stack implementation using linked list
struct Node {
    int data;
    Node* next;
};

class StackLL {
    Node* top;
public:
    StackLL() { top = nullptr; }
    
    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode;
    }
    
    int pop() {
        if (top == nullptr) {
            cout << "Stack Underflow\n";
            return -1;
        }
        Node* temp = top;
        int poppedValue = temp->data;
        top = top->next;
        delete temp;
        return poppedValue;
    }
    
    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }
    
    bool isEmpty() {
        return top == nullptr;
    }
};

int main(){
    
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Top element is: " << s.peek() << endl; // Should print 20

    cout << "Popped element is: " << s.pop() << endl; // Should print 20
    

    return 0;
}