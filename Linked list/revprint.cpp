// printing the linked list in reverse order

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>

using namespace std;
void print();
struct Node{
	int data;
	Node* next;
};

// declaring the head node
Node* head;
// inserting at the begning of the list
void insert(int data){
	Node* temp = new Node();
	temp->data = data;
	temp->next = head;
	head = temp;
}

// printing the list in reverse order using recurssion
void print(Node* head){
	if(head == NULL)
		return;
	print(head->next);
	cout<<head->data;
	
}

// reversing the list using recurssion
void rev(Node* p){
	if(p->next == NULL ){
		head = p;
		return ;
	}
	rev(p->next);
	Node* q = p->next;
	q->next = p;
	p->next = NULL;
}


int main(){
	head = NULL;
	int n;
	cout<<"enter the no. of list elements"<<endl;
	cin>>n;
	for(int i=0; i<n;i++){
		int m =rand()%10;
		insert(m);
	}
	cout<<endl;
	rev(head);
	print(head);
}
