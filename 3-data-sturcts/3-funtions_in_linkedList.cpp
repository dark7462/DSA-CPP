#include<bits/stdc++.h>
using namespace std;

typedef struct node{
	int value;
	struct node *next;
}node;
node *head = NULL, *tail = NULL;	//head for the starting and tail for going around the linkedlist	

void CreateNode(int n){ //how many node you want
	for(int i = 0 ;  i < n ; i++){  //taking inputs and placeing in the list
        int val;
        cout << "Enter the " << i+1 << " value of the linkedList : ";
		cin >> val;
		node *newnode = new node; //for every value creating a newnode
		newnode->value = val;
        newnode->next = NULL;
		if(head == NULL){
            head = newnode; // placeing in head if first element
			tail = newnode;
		}else{
            tail->next = newnode;   //then placeing normally
			tail = newnode;
		}
	}
}
void printLinkedlist(node *head){
	tail = head;
	while(tail != NULL){    //going though the every node till tail / NULL
		cout << "\n";
        cout << tail->value << "\t"; //printing the value
		tail = tail->next;  
	}
    cout << "\n";
}
void push_back(int val){
    //pushing the value in back of the LinkedList
    node *newnode = new node;
    newnode->value = val;
    newnode->next = NULL;
    tail->next = newnode;   //palcing after tail and linking the address
    tail = newnode;
}
void push_front(int val){
    //pushing the value in fornt of the LinkedList
    node *newnode = new node;
    newnode->value = val;
    newnode->next = head;//palcing before head and linking the address
    head = newnode;
    
}
void push(int idx,int val){ //can push at any index
    node *newnode = new node;   //new node for new value
    newnode->value = val;
    newnode->next = NULL;

    if(idx == 1){ // if head the push in head
        newnode->next = head;
        head = newnode;
        return;
    }

    int i = 1;
    node *temp = head;
    node *prev = NULL; // previous node to link the newnode in between
    while(temp != NULL && i < idx){ // loop till my idx of uploading comes
        prev = temp;
        temp = temp->next;
        i++;
    }
    //as loop end i have my previous node and nest node ready
    if(prev == NULL){   // if the previous node reaches last then index not found
        cout << "invalid index\n";
        return;
    }
    newnode->next = temp;   // now that we have prevoius and nest node link them with new node
    prev->next = newnode;
}
void del_head(){
    head = head->next;
}
void del_tail(){
    node *temp = head;
	while(temp->next != tail){
        temp = temp->next; 
	}
    temp->next = NULL;
    tail = temp;
}
void del_posi(int position){
    if(position == 1){
        head->next = head;
        return ;
    } 
    int i = 1;
    node *temp = head;
    node *prev = NULL; // previous node to link the newnode in between
    while(temp != NULL && i < position){ // loop till my idx of uploading comes
        prev = temp;
        temp = temp->next;
        i++;
    }
    prev->next = temp->next;
}
int main(){
	int n ;
    cout << "Enter how many nodes you want : ";
	cin >> n; // how many nodes you want
	CreateNode(n);
    int x;
    do{
        cout << "\nchoose the following task to preform\n";
        cout << "\n1. Insert data at head\n";
        cout << "\n2. Insert data at tail\n";
        cout << "\n3. Insert data at any position\n";
        cout << "\n4. Delete data at head\n";
        cout << "\n5. Delete data at tail\n";
        cout << "\n6. Delete data at any position\n";
        cout << "\n7. Display all nodes\n";
        cout << "\n8. Exit\n";
        cin >> x;

        if(x == 1){
            int data;
            cout << "Enter the data you want to insert at head : ";
            cin >> data;
            push_front(data);
        }
        else if(x == 2){
            int data;
            cout << "Enter the data you want to insert at tail : ";
            cin >> data;
            push_back(data);
        }
        else if(x == 3){
            int data, index;
            cout << "Enter the data you want to insert : ";
            cin >> data;
            cout << "Enter the location you want to insert the given data : ";
            cin >> index;
            push(index, data);
        }
        else if(x == 4) del_head();
        else if(x == 5) del_tail();
        else if(x == 6){
            int posi;
            cout << "Enter the position in which you want to delet the node : ";
            cin >> posi;
            del_posi(posi);
        }
        else if(x == 7) printLinkedlist(head);
        else if(x == 8) cout << "Thanks for using me\n Bye Bye... ;(\n";
    }while(x<8);

    return 0;
}
