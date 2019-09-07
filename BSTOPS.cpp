#include<iostream>
using namespace std;

struct node{
	int data;
	int pos;
	node *left;
	node *right;	
};

node *insert(node *root , int data , int pos){
	node *temp = (node *)malloc(sizeof(node));
	temp->data = data;
	if(root == NULL){
		cout<<pos<<endl;
		root = temp;
		root->left = NULL;
		root->left = NULL;
		root->pos = pos;
	}
	else if(data < root->data){
		root->left = insert(root->left,data,2*pos);		
	}
	else{
		root->right = insert(root->right,data,2*pos + 1);			
	}
	return root;
}
node *deleteBST(node *root , int data){
	if(root == NULL)
		return root;
	else if(data < root->data){
		root->left = deleteBST(root->left , data);
		return root;
	}
	else if(data > root->data){
		root->right = deleteBST(root->right , data);
		return root;
	}
	else{
		cout<<root->pos<<endl;
		if(root->left == NULL && root->right == NULL){
			root = NULL;
			return root;
		}
		else if(root->left == NULL){
			root = root->right;
			return root;
		}
		else if(root->right == NULL){
			root = root->left;
			return root;
		}
		else{
			node *temp = root->right;
			while(temp->left)
					temp = temp->left;
			root->data = temp->data;
			root->right = deleteBST(root->right , temp->data);
			return root;
		}
	}
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
			root = insert(root , data , 1);
			// cout<<position(root , data)<<endl;
		}
		if(c=='d'){
			cin>>data;
			// cout<<position(root , data)<<endl;
			root = deleteBST(root , data);
		}
	}
}