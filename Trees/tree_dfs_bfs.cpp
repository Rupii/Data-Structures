#include<iostream>
#include<queue>
using namespace std;

//Tree and Dfs

// pre post inoreder traversels


// Bfs


struct Node{
	int data;
	Node *left, *right;
};
Node* GetNewNode(int data){
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
Node* insert(Node* root, int data){
	if(root == NULL){
		root = GetNewNode(data);
	}
	else if(data <= root->data){
		root->left = insert(root->left, data);	
	}
	else 
		root->right = insert(root->right, data);
	return root;
}
void  print_inorder(Node* root){
	if(root == NULL) return;
	print_inorder(root->left);
	cout<<root->data<<"\t";
	print_inorder(root->right);
}

void  print_preorder(Node* root){
	if(root == NULL) return;
	cout<<root->data<<"\t";
	print_preorder(root->left);
	print_preorder(root->right);
}


void  print_postorder(Node* root){
	if(root == NULL) return;
	print_postorder(root->left);
	print_postorder(root->right);
	cout<<root->data<<"\t";
	
}
void print_bfs(Node* root){
	if(root == NULL) return ;
	queue <Node*> Q;
	Q.push(root);
	while(!Q.empty()){
		Node* current = Q.front();
		cout<<current->data<<"\t";
		if(current->left != NULL)
			Q.push(current->left);
		if(current->right != NULL)
			Q.push(current->right);
		
		Q.pop();
	}
	
	
}
int main(){
	Node* root = NULL;
	root = insert(root, 10);
	root = insert(root, 5);
	root = insert(root, 15);
	root = insert(root, 4);
	root = insert(root, 6);
	root = insert(root, 14);
	root = insert(root, 16);
	///   				  10
	//					/	\
	//				   5    15
	// 				  /\    /\
	//				4   6  14 16
	cout<<"\n preorder is:\t";
	print_preorder(root);
	
	cout<<"\n inorder is: \t";
	print_inorder(root);
	cout<<"\n postorder is\t:";
	print_postorder(root);
	cout<<"\nBFS is \t\t";
	print_bfs(root);
	
}
