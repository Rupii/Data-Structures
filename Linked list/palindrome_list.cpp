// check if the give list is palindrome

#include <iostream>
using namespace std;

// structuring the list
struct Node{
	char data;
	Node* next = NULL ;
};
Node* head;

void insert(char data){
		Node* newNode = new Node();
		newNode->data = data;
		
		Node* temp = head;
		if(head == NULL){
			head = newNode;
			return ;
		}
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
}

// printing the list
void print(Node* temp){
	if(temp == NULL){
		return ;
	}
	cout<<temp->data<<"\t";
	print(temp->next);
}

// checking if it is a Palindrome
bool isPalindrome(Node* temp){
	int count =0;
	while(temp != NULL){
		temp = temp -> next;
		count++;
	}
	int mid;
	(count % 2 == 0)?mid = count/2 :mid = (count+1)/2 ;
	// split the list into two halfs
	// [R A D]
	// [A R]
	temp = head;
	while(--mid){
		temp = temp->next;
	}
	Node* head2 = temp->next;
	temp->next = NULL;
	temp = head;
	
	// reversing the second list
	Node* current = head2;
	Node* prev = NULL;
	Node* next = current->next;
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head2 = prev;
	while(head2 != NULL){
		if(temp->data == head2->data){
			cout<<endl<<temp->data<<head2->data<<endl;
			temp = temp->next;
			head2 = head2->next;
		}
		else 
			{
			cout<<endl<<temp->data<<head2->data<<endl;
			return false;
			}
	}
	return true;
	
}
int main(){
	head = NULL;
	insert('R');
	insert('A');
	insert('D');
	insert('A');
	insert('R');
	// printing the list
	print(head);
	
	cout<<endl;
	cout<<endl;
	isPalindrome(head)?cout<<endl<<"the give list is palindrome":cout<<"given list is not a panlindrome";
	
}
