#include <stdio.h>
#include <stdlib.h>

// incerting a node 
// inorder traversal

//defining the Node structure
struct Node{
	int data ;
	struct	Node *left, *right;
};

//returns a pointer to new Node
struct Node* getNewNode(int data){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = data;
	temp -> left = temp -> right = NULL;
	return temp;
}

// incerts at the required position as per the binery search tree
struct Node* incert(struct Node* root, int data){
	if(root == NULL){
		root = getNewNode(data);
	}
	else if( root <= data){
		root->left = incert(root->left, data);
	}
	else{
		root -> right = incert(root -> right, data);
	}
	return root;
}

void print(struct Node* root){
	// printing inorder
	if(root == NULL) return;
	
	print(root->left);
	
	printf("%d\t",root->data);
	
	print(root->right);
}



int main(){
	struct Node* root = NULL;
	root = incert(root, 5);
	root = incert(root, 2);
	root = incert(root, 8);
	print(root);
	
}
