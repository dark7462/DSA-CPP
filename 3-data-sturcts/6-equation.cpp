#include <bits/stdc++.h>
using namespace std;
typedef struct node{
    int coef;
    int power;
    struct node *next;
}node;

node *head = NULL;
node *tail= NULL;

void CreatNode(int n){
    int co , po;
    for(int i = 0 ; i < n ; i++){
        cin >> co >> po;    //making nodes with co-efficeants and there powers
        node *newnode = new node;
        newnode->coef = co;
        newnode->power = po;
        newnode->next = NULL;

        if(head == NULL){
            head = newnode; //at head it nothing at head
            tail = newnode;
        }else{
            tail->next = newnode;   //rest all connected to head
            tail = newnode;
        }

    }
}
void print_eq(node *head){
    node *temp = head;
    while(temp != NULL){
        if(temp->next == NULL) cout << temp->coef << "x^" << temp->power << endl;
        else cout << temp->coef << "x^" << temp->power << " + ";
        temp = temp->next;  // printing in syntax
        
    }
}
int main() {
    int n ;
    cin >> n;
    CreatNode(n);
    print_eq(head);
    return 0;
}