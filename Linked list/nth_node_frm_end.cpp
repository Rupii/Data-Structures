#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};
Node *head = NULL;
void insert(int data){
	Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;
	if(head != NULL)
	{
	Node* temp2 = head;
	while(temp2->next != NULL){
		temp2 = temp2->next ;
	}
	temp2->next = temp;
	}
	else
		head = temp;
}
void print(){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<"\t";
		temp = temp->next;
	}
}
int node(int n){
	//n is nth position from end
	// we use two pointer with difference between the as n
	Node *current, *nth;
	nth = current = head;
	for(int i =0 ;i<n;i++){
		if (nth != NULL )
			nth = nth->next;
		
		else 
			return NULL;
	}
	while(nth != NULL){
		nth = nth->next;
		current = current->next;
	}
	return current->data;
}
int main(){
	insert(6);
	insert(5);
	insert(45);
	insert(16);
	insert(3);
	insert(5);
	print();
	cout<<"\n3rd from end\n"<<node(3)<<endl;
	int k;
	cout<<"\n enter the position you want from the end\n";
	cin>>k;
	cout<<endl<<k<<"position from end is\n"<<node(k)<<endl;

}
