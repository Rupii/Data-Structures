#include<iostream>
#include <stdio.h>
#include <stdlib.h>
// using pre define Queue library
#include <queue>
// Bineray tree level order traversal using Queue
using namespace std;

struct Node{
	char data;
	struct Node *left, *right; 
};

void level_order(struct Node* root){
	queue <Node*> Q;
	if(root == NULL)
		return ;
		
	Q.push(root);
	while(!Q.empty()){
		Node* temp = Q.front();
		Q.pop();
		cout<<temp->data<<"\t";
		
		if(temp->left != NULL)
			Q.push(temp->left);
		
		if(temp -> right != NULL)
			Q.push(temp->right);
		
	}
}

struct Node* getNewNode(int data){
	struct Node* getNewNode  =(struct Node*)malloc(sizeof(struct Node));
	getNewNode->data = data;
	getNewNode->left = getNewNode->right = NULL;
	return getNewNode;
}

int main(){
	Node* root = getNewNode('D');
	root->left = getNewNode('A');
	root->right = getNewNode('H');
	root->left->left = getNewNode('R');
	root->left->right = getNewNode('I');
	
	//level order  printing
	level_order(root);
	
}
