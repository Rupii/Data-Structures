// Linked list implemetation at the end of list
//in C

#include <stdio.h>
#include <stdlib.h>
void incert(int* data);
void print();
void pop();

//incert at a perticular position

void incrt(int data, int pos);


struct Node {
	int data;
	struct Node* next;
};

struct Node* head;

void incert(int* data){
	struct Node* temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = NULL;
	if(head != NULL){
	
	struct Node* temp1 = head;
	
	while(temp1->next != NULL){
		temp1 =  temp1->next;
	}
	temp1->next = temp;
	}
	else{
		head = temp;
	}
}

void print(){
	struct Node* temp = head;
	while(temp != NULL){
		printf("%d \t",temp->data);
		temp = temp->next;
	}
}

void pop(){
	struct Node  *temp = head;
	struct Node* temp1;
	while(temp->next != NULL){
		temp1 = temp;
		temp = temp->next;
	}
	temp1->next  = NULL;
}

void incrt(int data, int pos){
	
	struct Node* temp = head;
	int n = 2;
	while(n < pos){
		temp = temp->next;
		pos++;
	}
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1->data = data;
	temp1->next = temp->next;
	temp->next = temp1;
}

int main(){
	head = NULL;
	int n, i, k;
	
	printf("Enter no.of numbers to be incerted\n");
	scanf("%d", &n);
	for(i =0; i<n;i++){
		 scanf("%d", &k);
		incert(k);
	}
	
	
	print();
	pop();
	pop();
	printf("\n\n");
	print();
	
	incrt(5, 2);
	printf("\n\n");

	print();
}
