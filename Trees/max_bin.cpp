// finding max from a given binary tree
#include <iostream>
#include <queue>
using namespace std;

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

// we can find max by using recurssion as
// max is max of left  and right subtree 
char find_max(Node* root){
	if(root == NULL)
		return CHAR_MIN;// base condition
	
	char max, left, right;
	max = root->data;
	left = find_max(root->left);
	right = find_max(root->right);
	
	(max < left)?max = left:max = max;
	(max < right)?max = right:max = max;
	return max;

}
int main(){
	Node* root = NULL;
	root = insert(root, 'G');
	root = insert(root, 'a');
	root = insert(root, 'J');
	root = insert(root, 'F');
	root = insert(root, 'N');
	root = insert(root, 'Q');
	root = insert(root, 'I');
	cout<<"breath first traversal of the tree is"<<endl;
	print_bfs(root);
	char max = find_max(root);
	cout<<endl<<endl<<max;
}
