// min and max in in a BST
// height and size of the binary search tree

#include <iostream>
using namespace std;

struct Node{
	int data;
	Node  *left, *right;
};
Node* getNewNode(int data){
	Node* newNode = new Node();
	newNode -> data = data;
	newNode -> left = newNode -> right = NULL;
	return newNode; 
}
Node* insert(Node *root, int data ){
	if(root == NULL){
		root = getNewNode(data);
	}
	else if(root->data <= data){
		root->right = insert(root->right, data);
	}
	else
	{
		root -> left = insert(root->left, data);
	}
	return root;
}
void min(Node* root){
	if(root->left == NULL){
		cout<<endl<<root->data;
		return;
	}
	min(root->left) ;
}

void max(Node* root){
	if(root->right == NULL){
		cout<<endl<<root->data;
		return;
	}
	max(root->right) ;
}
void print(Node *root){
	if(root == NULL)
		return ;
	print( root->left);
	cout<<root->data<<"\t";
	print(root->right);
}

int size(Node* root){
	if(root == NULL)
		return 0;
	
	return 1+size(root->left)+size(root->right);
}

int height(Node* root){
	if(root == NULL)
		return 0;
	
	// height of the tree is max of height of left subtree , right sub tree
	int l = 1 + height(root->left);
	int r = 1 + height(root->right);
	if(l > r)
		return l;
	
	else
		return r;
}

int main(){
	Node* root = NULL;	
	root = insert(root, 10);
	root = insert(root, 4);
	root = insert(root, 32);
	root = insert(root, 5);
	root = insert(root, 15);
	root = insert(root, 14);
	root = insert(root, 16);
	print(root);
	min(root);
	max(root);
	cout<<"\n\nSize of the tree is \n"<<size(root);
	cout<<"\n \n Height of the tree is \n"<<height(root);
}
