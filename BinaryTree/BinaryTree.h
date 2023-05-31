#include <iostream>
#include <string>
using namespace std;

class Node
{
	public:
		int id;
		string name;
		Node *left;
		Node *right;
		
		Node()
		{
			left = right = NULL;
		}
};


class BinaryTree
{
	public :
		Node *root;
		
		void insert(int);
		Node *insertRecursive(Node * , int);
		void deleteNode(int);
		
		void preorder();
		void preorderRecursive(Node *);
		
		void inorder();
		void inorderRecursive(Node *);
		
		void postorder();
		void postorderRecursive(Node *);
		
		Node *search(int);
		Node *searchVall(Node *Node, int val);
		
		Node *FindMin();
		
		Node *FindMax();
		
		BinaryTree()
		{
			root = NULL;
		}
};