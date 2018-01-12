#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>
using namespace std;
void print();
struct Node{
	int data;
	Node* next;
	Node* prev;
};
Node* head;
Node* getnewNode(int data){
	Node* temp = (Node*)malloc(sizeof(Node));
	(*temp).data = data;
	
	(*temp).next = (*temp).prev = NULL;
	
}
void insert(int data){
	Node* temp = getnewNode(data);
	if(head == NULL){
		
			head = temp;
			return ;
	}
	head->prev = temp;
	temp->next = head;
	head = temp;
	
}
void reversePrint(){
	Node* temp = head;
	while(temp->next != NULL)
			temp= temp->next;
	cout<<"reverse print is:\t";
	while(temp != NULL){
		cout<<temp->data<<"\t";
		temp = temp->prev;
	}
	cout<<endl;
}
void print(){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<"\t";
		temp = temp->next; 
	}
	cout<<endl;
	
}
int main(){
	head = NULL;
	int n;
	cout<<"enter the no. of list elements"<<endl;
	cin>>n;
	for(int i=0; i<n;i++){
		int m =rand()%10;
		insert(m);
		print();
	}
	cout<<endl;
	reversePrint();
}
