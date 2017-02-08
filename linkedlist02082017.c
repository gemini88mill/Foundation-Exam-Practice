//Linked List in C 
//by Raphael Miller 

#include <stdio.h>
#include <stdlib.h>

//linked list node 
struct node{
	int data;
	struct node* next;
};

int insert(int data, struct node* head);
void push(int data, struct node** head);
void delete(int data, struct node* head);
struct node* search(int data, struct node* head);
void print(struct node* node);

int main(){
	
	struct node* head = NULL;
	struct node* current;
	
	head = malloc(sizeof(struct node));
	if(head == NULL){
		return 1;
	}
	
	head->data = 1;
	head->next = NULL;
	
	current = head;
	 
	insert(33, head);
	insert(54, head);
	push(67, &head);
	delete(1, head);
	search(54, head);
	print(head);
	
	return 0;
}

int insert(int data, struct node* head){
	//init new node
	struct node* current = head;
	
	while (current->next != NULL){
		current = current->next;
	}
	
	current->next = malloc(sizeof(struct node));
	current->next->data = data;
	current->next->next = NULL;
	
}

void push(int data, struct node** head){
	struct node* newNode;
	
	newNode = malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;	
}

void delete(int data, struct node* head){
	struct node* temp = malloc(sizeof(struct node));
	struct node* current = head;
	
	temp = 
	
	
	
}
struct node* search(int data, struct node* head){
	if(head == NULL){
		return NULL;
	}

	struct node* current = head;
	
	if(current->data == data){
		return current;
	} else{
		search(data, current->next);
	}
}

void print(struct node* node){
	struct node* current = node;

	while(current != NULL){
		printf("%d\t", current->data);
		current = current->next;
	}
}
