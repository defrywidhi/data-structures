#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

void BinaryTree::insert(int insertId){
	root = insertRecursive(root, insertId);
}

Node *BinaryTree::insertRecursive(Node *currentRoot, int insertId){
	
		if (currentRoot==NULL){
		currentRoot = new Node();
		currentRoot->id = insertId;
		return currentRoot;
	}
	
	if (insertId < currentRoot->id){
		currentRoot->left = insertRecursive(currentRoot->left, insertId); 
	}
	
	else if (insertId > currentRoot->id){
		currentRoot->right = insertRecursive(currentRoot->right, insertId);
	}
	
	return currentRoot;
}

void BinaryTree::inorder(){
	inorderRecursive(root);
}

void BinaryTree::inorderRecursive(Node *currentRoot){
	if (currentRoot!=NULL)
	{
		inorderRecursive(currentRoot->left);
		cout << currentRoot->id << ", ";
		inorderRecursive(currentRoot->right);
	}
}

void BinaryTree::preorder(){
	preorderRecursive(root);
}


void BinaryTree::preorderRecursive(Node *currentRoot){
	if (currentRoot!=NULL){
		cout << currentRoot->id << ", ";
		preorderRecursive(currentRoot->left);
		preorderRecursive(currentRoot->right);
	}
}

void BinaryTree::postorder(){
	postorderRecursive(root);
}


void BinaryTree::postorderRecursive(Node *currentRoot){
	if (currentRoot!=NULL){
		postorderRecursive(currentRoot->left);
		postorderRecursive(currentRoot->right);
		cout << currentRoot->id << ", ";
	}
}


Node *BinaryTree::searchVall(Node *Node, int vall){
	if (Node==NULL || Node->id==vall){
		return Node;
}
	if (vall > Node->id ){
		return searchVall(Node->right, vall);
}
	else (vall < Node->id); {
		return searchVall(Node->left, vall);
}
}
Node *BinaryTree::search(int vall){
	return searchVall(root, vall);
}

Node *BinaryTree::FindMin(){
	Node *Node = root;
	while(Node != NULL && Node->left != NULL){
		Node = Node->left;
	}
	
	if(Node != NULL){
		cout << "The Minimum value in this tree is: "<< Node->id <<endl;
	}
	else{
		cout << "The tree is empty"<<endl;
	}
	return Node;
}

Node *BinaryTree::FindMax(){
	Node *Node = root;
	while(Node != NULL && Node->right != NULL){
		Node = Node->right;
	}
	if(Node != NULL){
		cout << "The Maximun value in this tree is: "<< Node->id <<endl;
	}
	else{
		cout <<"The tree is empty";
	}
	return Node;
}