#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
};

Node* head = nullptr, *temp = nullptr;

void LinkedList(int n) {    // number of nodes
    for (int i = 1; i <= n; i++) {
        int value;  //take values everytime for new node
        cin >> value;
        Node* newNode = new Node;   // creating new node
        newNode->val = value;
        newNode->next = nullptr;
        if (head == nullptr) {  //if nothing at head then newnode as head
            head = newNode;
            temp = newNode;
        } else {    // else every node connect to head
            temp->next = newNode;
            temp = newNode;
        }
    }
}

void printLinkedList(Node* head) {
    temp = head;    // temp starting from head
    while (temp != nullptr) {   //stops at null
        cout << temp->val << "\t";
        temp = temp->next;  // shifting to next position
    }
    cout << endl;
}


int main() {
    int n = 3;  
    LinkedList(n);
    printLinkedList(head);
    return 0;
}
