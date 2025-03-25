#include<bits/stdc++.h>
using namespace std;

typedef struct node{
	int value;
	struct node *next;
	struct node *prev;
}node;

node *head = NULL, *tail = NULL;	//head for the starting and tail for going around the linkedlist	
void CreateNode(int n){ //how many node you want

	for(int i = 0 ;  i < n ; i++){  //taking inputs and placeing in the list
        
        int val;
        cout << "Enter the" << i+1 <<  "value of the linkedList : ";
		cin >> val;

		node *newnode = new node; //for every value creating a newnode
		newnode->value = val;
        newnode->next = NULL;
        newnode->prev = NULL;

		if(head == NULL){
            head = newnode; // placeing in head if first element
			tail = newnode;
		}
        else{
            newnode->prev = tail;
            tail->next = newnode;   //then placeing normally
			tail = newnode;
		}
	}
}
void printLinkedlist(node *head){
    node *temp = head;
    cout << endl;
    while(temp != NULL){    //going though the every node till tail / NULL
        cout << temp->value << "\t"; //printing the value
		temp = temp->next;  
	}
    cout << endl;
}
void printRverselist(node *tail){
    node *temp = tail;
    cout << endl;
	while(temp != NULL){    //going though the every node till tail / NULL
        cout << temp->value<<"\t"; //printing the value
		temp = temp->prev;  
	}
    cout << endl;

}
void push_back(int val){
    //pushing the value in back of the LinkedList
    node *newnode = new node;
    newnode->value = val;
    newnode->next = NULL;
    newnode->prev = tail;  //palcing after tail and linking the address
    tail->next = newnode;
    tail = newnode;
}
void push_front(int val){
    //pushing the value in fornt of the LinkedList
    node *newnode = new node;
    newnode->value = val;
    head->prev = newnode;
    newnode->next = head;//palcing before head and linking the address
    head = newnode;
    
}
void push(int idx,int val){ //can push at any index
    node *newnode = new node;   //new node for new value
    newnode->value = val;
    newnode->next = NULL;
    newnode->prev = NULL;

    if(idx == 1){ // if head the push in head
        push_front(val);
        return;
    }

    int i = 1;
    node *tempFw = head->next; // runing forward
    node *tempBk = head;    // at back

    while(++i < idx && tempBk != NULL){ // reaching the insterinng point
        tempBk = tempFw;
        tempFw = tempFw->next;
    }

    if(tempFw == NULL){ // cheacking the invalid position
        cout << "Invalid position.\n";
        return;
    }

    tempBk->next = newnode;
    newnode->next = tempFw;
    tempFw->prev = newnode;
    newnode->prev = tempBk; //placeing the values and making foward and backwards connection
    
}
void del_head(){
    head = head->next;
    head->prev = NULL;  // removing head
}
void del_tail(){
    tail = tail->prev;
    tail->next = NULL;  //re moving tail
}
void del_posi(int idx){
    if(idx == 1){
        del_head(); // base case if to be removed at head
        return ;
    }

    int i = 1;
    node *tempFw = head->next;
    node *tempBk = head;

    while(i++ < idx && tempBk != NULL){
        tempBk = tempFw;        // reaching the inserting point
        tempFw = tempFw->next;
    }

    if(tempFw == NULL){
        cout << "Invalid position.\n" << endl;  // invalid area
        return;
    }

    tempFw->prev = tempBk->prev;
    tempBk->prev->next = tempFw;    // placing and making connection

    
}
int main(){
	int n ;
    cout << "Enter how many nodes you want : ";
	scanf("%d",&n); // how many nodes you want
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
        cout << "\n8. Print reverse List\n";
        cout << "\n9. Exit\n";
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
        else if(x == 4)del_head();
        else if(x == 5)del_tail();
        else if(x == 6){
            int posi;
            cout << "Enter the position in which you want to delet the node : ";
            cin >> posi;
            del_posi(posi);
        }
        else if(x == 7) printLinkedlist(head);
        else if(x == 8) printRverselist(tail);
        else if(x == 9) cout << "Thanks for using me\n Bye Bye... ;(\n";
    }while(x<9);


    return 0;
}