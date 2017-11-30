#include<iostream>

using namespace std;

// Linked List implementation to incert and delete from nth postion

void print();

struct Node{
	int data;
	Node* next;
};
Node* head;
void incert(int data, int n){
	
	Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;
	if(n == 1){
		temp->next = head ;
		head = temp;
		return;
	}	
	Node* temp1 = head; 
	for(int i= 0; i<n-2; i++){
		temp1 = temp1->next;
	}
	temp->next = temp1->next;
	temp1->next = temp;

}

void Delete(int n){
	Node* temp = head;
	if(n == 1){
		head = temp->next;
		delete temp;
		return ;
		}
		Node* temp1;
		for(int i = 0 ; i< n-2 ;i++)
			temp = temp->next;
		temp1 = temp->next;
		temp->next = temp1->next;
		delete temp1;
}

void print(){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<"\t";
		temp = temp->next;
	}
	cout<<"\n";
}

int main(){
	head = NULL;
	incert(3, 1);print();//list 3
	incert(4, 2);print();//list 3 4 
	incert(5, 1);print();//list 5 3 4
	incert(2, 3);//list 5 3 2 4
	print();
	int n = 1;
	while(n != 0)
	{	
	cout<<"\nenter positon to Delete\n";
	cin>>n;
	Delete(n);
	print();
	}

}
