// Reversing linked list using iterative method

#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* head ;

void insert(int data){
	Node* temp = new Node();
	temp -> data = data;
	temp -> next = NULL;
	if(head == NULL){
		head = temp;
	} 	
	else{
		Node *tem = head;
		while(tem->next != NULL){
			tem = tem -> next;
		}
		tem->next = temp;
	}
	
}
// reversing in iterative method
void reverse(){
	Node *curr, *pre, *next;
	pre = NULL;
	curr = head;
	next = curr -> next;
	while(curr != NULL){
		next = curr -> next;
		curr->next = pre;
		pre = curr;
		curr = next; 
	}
	head = pre;
}

void print(Node* head){
	if(head == NULL)
		return;
	printf("%d  ",head->data);
	print(head->next);
}

int main(){
	head = NULL;
	insert(5);
	insert(9);
	insert(23);
	insert(4);
	print(head);
	printf("\n\n");
	reverse();
	print(head);
}
