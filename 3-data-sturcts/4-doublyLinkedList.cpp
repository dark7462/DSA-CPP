#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int value;
	struct node *next;
	struct node *prev;
}node;

node *head = NULL, *tail = NULL;	//head for the starting and tail for going around the linkedlist	
void CreateNode(int n){ //how many node you want

	for(int i = 0 ;  i < n ; i++){  //taking inputs and placeing in the list
        
        int val;
        printf("Enter the %d value of the linkedList : ", i+1);
		scanf("%d",&val);

		node *newnode = (node *)malloc(sizeof(node)); //for every value creating a newnode
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
    printf("\n");
	while(temp != NULL){    //going though the every node till tail / NULL
        printf("%d\t",temp->value); //printing the value
		temp = temp->next;  
	}
    printf("\n");
}
void printRverselist(node *tail){
    node *temp = tail;
    printf("\n");
	while(temp != NULL){    //going though the every node till tail / NULL
        printf("%d\t",temp->value); //printing the value
		temp = temp->prev;  
	}
    printf("\n");
}
void push_back(int val){
    //pushing the value in back of the LinkedList
    node *newnode = (node *)malloc(sizeof(node));
    newnode->value = val;
    newnode->next = NULL;
    newnode->prev = tail;  //palcing after tail and linking the address
    tail->next = newnode;
    tail = newnode;
}
void push_front(int val){
    //pushing the value in fornt of the LinkedList
    node *newnode = (node *)malloc(sizeof(node));
    newnode->value = val;
    head->prev = newnode;
    newnode->next = head;//palcing before head and linking the address
    head = newnode;
    
}
void push(int idx,int val){ //can push at any index
    node *newnode = (node *)malloc(sizeof(node));   //new node for new value
    newnode->value = val;
    newnode->next = NULL;
    newnode->prev = NULL;

    if(idx == 1){ // if head the push in head
        push_front(val);
        return;
    }

    int i = 1;
    node *tempFw = head->next;
    node *tempBk = head;

    while(++i < idx && tempBk != NULL){
        tempBk = tempFw;
        tempFw = tempFw->next;
    }

    if(tempFw == NULL){
        printf("Invalid position.\n");
        return;
    }

    tempBk->next = newnode;
    newnode->next = tempFw;
    tempFw->prev = newnode;
    newnode->prev = tempBk;
    
}
void del_head(){
    head = head->next;
    head->prev = NULL;
}
void del_tail(){
    tail = tail->prev;
    tail->next = NULL;
}
void del_posi(int idx){
    if(idx == 1){
        del_head();
        return ;
    }

    int i = 1;
    node *tempFw = head->next;
    node *tempBk = head;

    while(i++ < idx && tempBk != NULL){
        tempBk = tempFw;
        tempFw = tempFw->next;
    }

    if(tempFw == NULL){
        printf("Invalid position.\n");
        return;
    }

    tempFw->prev = tempBk->prev;
    tempBk->prev->next = tempFw;

    
}
int main(){
	int n ;
    printf("Enter how many nodes you want : ");
	scanf("%d",&n); // how many nodes you want
	CreateNode(n);
    int x;
    do{
        printf("\nchoose the following task to preform\n");
        printf("\n1. Insert data at head\n");
        printf("\n2. Insert data at tail\n");
        printf("\n3. Insert data at any position\n");
        printf("\n4. Delete data at head\n");
        printf("\n5. Delete data at tail\n");
        printf("\n6. Delete data at any position\n");
        printf("\n7. Display all nodes\n");
        printf("\n8. Print reverse List\n");
        printf("\n9. Exit\n");
        scanf("%d",&x);

        if(x == 1){
            int data;
            printf("Enter the data you want to insert at head : ");
            scanf("%d",&data);
            push_front(data);
        }
        else if(x == 2){
            int data;
            printf("Enter the data you want to insert at tail : ");
            scanf("%d",&data);
            push_back(data);
        }
        else if(x == 3){
            int data, index;
            printf("Enter the data you want to insert : ");
            scanf("%d",&data);
            printf("Enter the location you want to insert the given data : ");
            scanf("%d", &index);
            push(index, data);
        }
        else if(x == 4)del_head();
        else if(x == 5)del_tail();
        else if(x == 6){
            int posi;
            printf("Enter the position in which you want to delet the node : ");
            scanf("%d",&posi);
            del_posi(posi);
        }
        else if(x == 7) printLinkedlist(head);
        else if(x == 8) printRverselist(tail);
        else if(x == 9) printf("Thanks for using me\n Bye Bye... ;(\n");
    }while(x<9);


    return 0;
}