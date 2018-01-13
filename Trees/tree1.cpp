#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *left, *right;
};

Node* getNewNode(int data){
	Node* getNewNode  = new Node();
	getNewNode->data = data;
	getNewNode->left = getNewNode->right = NULL;
	return getNewNode;
}
void print(Node* root){
	if(root == NULL)
		return ;
	print(root->left);
	cout<<root->data<<"\t";
	print(root->right);
}
int main(){
	Node* root = getNewNode(3);
	root->left = getNewNode(5);
	root->right = getNewNode(43);
	root->left->left = getNewNode(2);
	root->left->right = getNewNode(3);
	
	//inorder printing
	print(root);
	
}
