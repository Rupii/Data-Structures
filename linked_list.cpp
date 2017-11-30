#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void print();
struct Node{
	int data;
	Node* next;
};
Node* head = NULL;

void incert(int x){
	Node* temp = (Node*)malloc(sizeof(Node));
	temp -> data = x;	
	temp -> next = NULL;
	if(head == NULL)
	{
//		temp->next = head;
		head = temp;
	}
	else {
	
		Node* tempo = head;
		while(tempo->next != NULL){
			//cout<<tempo->data<<"\t";
			tempo = tempo->next;
		}
		tempo->next  = temp;
	}
}


void print(){
	Node* temp = head;
	do{
		cout<<temp->data<<"\t";
		temp = temp->next;
	}while(temp != NULL);
	  
	  cout<<"\n";
}

void pop(){
	Node* temp1 = head;
	Node* prev;
	while(temp1->next != NULL){
		prev = temp1;
		temp1 = temp1 -> next;
	}
	prev->next = NULL;	
}

int main(){
	incert(5);
	incert(8);
	incert(3);
	incert(4);
	pop();
	print();
	
}
