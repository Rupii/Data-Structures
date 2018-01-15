// printing level order traversal in reverse
#include <iostream>
#include <stack>
#include <queue>
// queue for level order
// stack for reverse
using namespace std;

struct Node{
	int data;
	Node *left, *right; 
};
Node* getNewNode(int data){
	Node* node = new Node();
	node->data = data;
	node->left = node->right = NULL;
	
	return node;	
	
}

void print_reverse_level(Node* root){
	queue <Node*> Q;
	stack <int> S;
	Q.push(root);
	cout<<endl<<"Level order is   		";
	while(!Q.empty()){
		Node* temp = Q.front();
		cout<<temp->data<<"\t";
		S.push(temp->data);
		if(temp->left != NULL)
			Q.push(temp->left);
		if(temp->right != NULL)	
			Q.push(temp->right);
		Q.pop();
				
	}
	cout<<endl<<"Reverse of level order is\t";
	while(!S.empty()){
		cout<<S.top()<<"\t";
		S.pop();
	}
}

int main(){
	Node* root = NULL; 
	root = getNewNode(3);
	root->left = getNewNode(7); 
	root->right = getNewNode(21); 
	root->left->left = getNewNode(5); 
	root->right->right = getNewNode(9); 
	print_reverse_level(root);
}
