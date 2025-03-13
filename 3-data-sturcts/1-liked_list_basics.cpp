#include <bits/stdc++.h> 
using namespace std;

// Define a structure for a node in the linked list
struct Node {
    int data;   // Data 
    Node* next; // Pointer to the next node
};

Node* head = NULL; // Initialize head pointer to null

int main() {
    
    // Allocate memory for the head node
    head = new Node;
    head->data = 10;   // Assign data to the head node
    head->next = nullptr; // Initialize next pointer to null

    // Create another node
    Node* first = new Node;
    first->data = 20;  // Assign data to the second node
    first->next = nullptr; // Initialize next pointer to null
    head->next = first; // Link the head node to the second node

    // Traverse the linked list and print its elements
    Node* temp = head; // Use a temporary pointer to traverse the list
    while (temp != nullptr) {
        cout << temp->data << endl; // Print data of the current node
        temp = temp->next; // Move to the next node
    }

    // Free allocated memory
    delete head;
    delete first;
    
    return 0;
}
