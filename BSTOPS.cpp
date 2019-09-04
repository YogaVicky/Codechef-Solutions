#include<iostream>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;	
}

node * insert(node *root , int data){
	node *temp = (node *)malloc(sizeof(node));
	temp->data = data;
	if(root == NULL){
		root = temp;
		root->left = NULL;
		root->left = NULL;
	}
	else if(data <= root->data){
		root->left = insert(root->left,data);		
	}
	else{
		root->right = insert(root->right,data);			
	}
	return root;
}
node * deleteBST(node *root , int data){
	if(root = NULL)
		return root;
	else if(data < root->data)
		root->left = deleteBST(root->left , data);
	else if(data > root->data)
		root->right = deleteBST(root->right , data);
	else{
		if(root->left == NULL && root->right == NULL){
			delete root;
			root = NULL;
			return root;
		}
		else if(root->left == NULL){
			node *temp = root;
			root = root->right;
			delete temp;
			return root;
		}
		else if(root->right == NULL){
			node *temp = root;
			root = root->left;
			delete temp;
			return root;
		}
		else{
			node *temp = findMinAddr(root->right);
			root->data = temp->data;
			root->right = deleteBST(root->right , temp->data);
		}
	}
}
node * findMinAddr(node *root){
	node *current = root;
	if(root == NULL){
		cout<<"Tree is empty\n";
		return -1;
	}
	while(current->left != NULL){
		current = current->left;
	}
	return current;
}
int main(){
	node *root = NULL;
	int q , data;
	char c;
	cin>>q;	
	while(q--){
		cin>>c;
		if(c=='i'){
			cin>>data;
			root = insert(root , data);
			// cout<<position(data)<<endl;
		}
		else{
			// cout<<position(data)<<endl;
			root = delete(root , data);
		}
	}
}