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
	print(root->right);
	cout<<root->data<<"\t";
}
int find_min(Node* root){
	if(root == NULL)
		return INT_MAX;
	int min = root->data;
	int left = find_min(root->left);
	int right = find_min(root->right);
	if(min > left)
		min = left;
	if(min > right)
		min = right;
		
	return min;
}
int main(){
	Node* root = getNewNode(3);
	root->left = getNewNode(5);
	root->right = getNewNode(43);
	root->left->left = getNewNode(2);
	root->left->right = getNewNode(3);
	
	//inorder printing
	print(root);
	cout<<endl<<endl<<find_min(root);

}
