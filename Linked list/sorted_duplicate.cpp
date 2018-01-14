#include <iostream>
// removing duplicates from a sorted list
using namespace std;
struct Node{
	int data;
	Node *next = NULL;
};

Node* insert(int data, Node* temp){
	Node* newNode = new Node();
	newNode->data = data;
	if(temp == NULL){
		return newNode;
	}
	Node *tem = temp;
	while(tem->next != NULL)
		tem = tem->next;
		
	tem->next = newNode;
	
}

void print(Node* temp){
	if(temp == NULL)
		return ;
		
	cout<<temp->data<<"\t";
	print(temp->next);
}
void sort(Node* temp){
	Node* prev = temp;
	Node* curr = temp;
	while(curr != NULL){
		prev = temp; 
		temp = temp->next; 
		if(temp->data == prev->data){
			prev->next = temp->next;
			temp->next == NULL;
		}
		curr = prev->next;
	}
	cout<<endl<<endl;
}
int main(){
	Node* head = NULL;
	head = insert(4, head);
	
	insert(6, head);
	insert(6, head);
    insert(9, head);
	insert(9, head);
	print(head);
	sort(head);
	print(head);
}
