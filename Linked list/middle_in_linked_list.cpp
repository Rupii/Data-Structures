#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next = NULL;
};

Node* head ;

void insert(int data){
	Node* temp = new Node();
	temp->data = data;
	if(head == NULL){
		head = temp;
		return ;
	}
	Node* tem = head;
	while(tem->next != NULL){
		tem = tem->next;
	}
	tem->next = temp;
}

void print(Node* temp){
	if(temp == NULL){
		return;
	}
	cout<<temp->data<<"\t";
	print(temp->next);
}

void middle(Node* head){
	Node *slow, *fast;
	slow = fast = head;
	while(fast->next != NULL){
		slow = slow->next;
		fast = fast->next;
		if(fast == NULL)
			break;
		else 
			fast = fast->next;
		
	}
	cout<<endl<<"Middle element of the list without the iteration is  "<<slow->data;
}
int main(){
	head = NULL;
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	print(head);
	middle(head);
}
