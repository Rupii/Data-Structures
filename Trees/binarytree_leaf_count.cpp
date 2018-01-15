// counting the No. of leaves in the Binaray tree
#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};

Node* getNewNode(int data, Node* root){
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
}
// pre oreder traversal
void print(Node* root){
	if(root == NULL)
		return ;
	cout<<root->data<<"\t";
	print(root->left);
	print(root->right);
}

int height(Node* root){
	if(root == NULL){
		return 0;
	}
	int left = height(root->left) + 1;
	int right = height(root->right) + 1;
	if(left > right)
		return left;
	else 
		return right;
}

unsigned int leaf_count(Node* root){
	if(root == NULL)
		return 0;
	if(root->left == 0 && root->right == 0)
		return 1;
	else
		return leaf_count(root->left) + leaf_count(root->right);
}

int main(){
	Node* root = NULL;
	root = getNewNode(8, root);
	root->left = getNewNode(5, root);
	root->right = getNewNode(4, root);
	root->left->left = getNewNode(9, root);
	root->left->right = getNewNode(12, root);
	root->right->right = getNewNode(13, root);
	root->right->right->right = getNewNode(19, root);
	print(root);
	cout<<endl<<"height is "<<height(root);
	cout<<endl<<"No. of leafs are "<<leaf_count(root);
}
