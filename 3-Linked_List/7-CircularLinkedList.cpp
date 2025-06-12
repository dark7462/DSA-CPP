#include <bits/stdc++.h>
using namespace std;

typedef struct node{
	int data;
	struct node* next;
}node;

node *head = NULL, *tail = NULL;

void push(int val){
	node *newnode = new node;
	newnode->data = val;
	newnode->next = NULL;
	if(head == NULL){
		head = newnode;
		tail = newnode;
	}else{
		tail->next = newnode;
		tail = newnode;
		tail->next = head;
	}
}
void Display(node *head){
	if (head == NULL) return;
	node *temp = head;
	do{
		cout << temp->data << " ";
		temp = temp->next;
	} while(temp != head);
}
void del_head() {
	head = head->next;
	tail->next = head;
}

void Delete(int pos) {
	if (head == NULL) return;
	if (pos == 0) {
		del_head();
		return;
	}
	node *curr = head;
	int count = 0;
	while (count < pos - 1 && curr->next != head) {
		curr = curr->next;
		count++;
	}
	if (curr->next == head) {
		cout << "Invalid Position" << endl;
		return;
	}
	curr->next = curr->next->next;
	if (curr->next == head) {
		tail = curr;
	}
}

int main(){
	push(10);
	push(20);
	push(30);
	Display(head);
	printf("\n");
	Delete(1);
	Display(head);
	printf("\n");
	return 0;
}