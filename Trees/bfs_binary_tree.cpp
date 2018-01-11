#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

//breadth first search algorithm for tree

struct Node{
	char data;
	Node *left, *right;
};


Node* getNewNode(char data){
	Node *temp = new Node();
	temp -> data = data;
	temp -> left = temp -> right = NULL;
	return temp; 
}
Node* insert(Node* root, char data){
	if(root == NULL){
		root = getNewNode(data);
	}
	else if(root->data <= data){
		root->right = insert(root->right, data);
	}
	else{
		root -> left = insert(root->left, data);
	}
}
void print_bfs(Node* root){
	if (root == NULL)
		return ;
		
	queue <Node*> Q;
	Q.push(root);
	while(!Q.empty()){
		Node* present = Q.front();
		cout<<present->data<<"\t";
		if(present ->left != NULL){
			Q.push(present -> left);
		}
		if(present -> right != NULL){
			Q.push(present -> right);
		}
		Q.pop();
	}
	
}
int main(){
	Node* root = NULL;
	root = insert(root, 'G');
	root = insert(root, 'A');
	root = insert(root, 'J');
	root = insert(root, 'F');
	root = insert(root, 'N');
	root = insert(root, 'Q');
	root = insert(root, 'B');
	cout<<"breath first traversal of the tree is"<<endl;
	print_bfs(root);
	
}
