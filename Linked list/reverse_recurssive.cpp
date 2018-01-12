#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node* head;

void insert(int data){
	Node *temp = new Node();
	temp -> data = data;
	temp -> next = NULL;
	if (head == NULL)
		head = temp;
		
	else{
		Node* tem = head;
		while(tem->next != NULL)
			tem = tem->next;
			
		tem->next = temp;
	}
}

void print(Node* head){
	if(head == NULL)
		return ;
	cout<<head->data<<"\t";
	print(head->next);
}

void reverse(Node* temp){
	if(temp->next == NULL)
	{
		head = temp;
		return ;
	}
	reverse(temp->next);
	Node* q = temp->next;
	q->next = temp;
	temp->next = NULL;
}

int main(){
	head = NULL;
	
	insert(5);
	insert(9);
	insert(23);
	insert(4);
	print(head);
	reverse(head);
	cout<<endl;
	print(head);
}
