// create a c++ program to insert , delete and search in BST

#include<iostream> 
using namespace std; 

// A BST node 
struct Node 
{ 
	int key; 
	struct Node *left, *right; 
}; 

// A utility function to create a new BST node 
struct Node *newNode(int item) 
{ 
	struct Node *temp = new Node; 
	temp->key = item; 
	temp->left = temp->right = NULL; 
	return temp; 
} 

// A utility function to do inorder traversal of BST 
void inorder(struct Node *root) 
{ 
	if (root != NULL) 
	{ 
		inorder(root->left); 
		cout<<root->key<<" "; 
		inorder(root->right); 
	} 
} 

/* A utility function to insert a new node with given key in BST */
struct Node* insert(struct Node* node, int key) 
{ 
	/* If the tree is empty, return a new node */
	if (node == NULL) return newNode(key); 

	/* Otherwise, recur down the tree */
	if (key < node->key) 
		node->left = insert(node->left, key); 
	else if (key > node->key) 
		node->right = insert(node->right, key); 

	/* return the (unchanged) node pointer */
	return node; 
} 

/* Given a non-empty binary search tree, return the node with minimum 
key value found in that tree. Note that the entire tree does not 
need to be searched. */
struct Node * minValueNode(struct Node* node) 
{ 
	struct Node* current = node; 

	/* loop down to find the leftmost leaf */
	while (current && current->left != NULL) 
		current = current->left; 

	return current; 
} 

/* Given a binary search tree and a key, this function deletes the key 
and returns the new root */
struct Node* deleteNode(struct Node* root, int key) 
{ 
	// base case 
	if (root == NULL) return root; 

	// If the key to be deleted is smaller than the root's key, 
	// then it lies in left subtree 
	if (key < root->key) 
		root->left = deleteNode(root->left, key); 

	// If the key to be deleted is greater than the root's key, 
	// then it lies in right subtree 
	else if (key > root->key) 
		root->right = deleteNode(root->right, key); 

	// if key is same as root's key, then This is the node 
	// to be deleted 
	else
	{ 
		// node with only one child or no child 
		if (root->left == NULL) 
		{ 
			struct Node *temp = root->right; 
			delete root; 
			return temp; 
		} 
		else if (root->right == NULL) 
		{ 
			struct Node *temp = root->left; 
			delete root; 
			return temp; 
		} 

		// node with two children: Get the inorder successor (smallest 
		// in the right subtree) 
		struct Node* temp = minValueNode(root->right); 

		// Copy the inorder successor's content to this node 
		root->key = temp->key; 

		// Delete the inorder successor 
		root->right = deleteNode(root->right, temp->key); 
	} 
	return root; 
} 

// A utility function to search a given key in BST 
struct Node* search(struct Node* root, int key) 
{ 
	// Base Cases: root is null or key is present at root 
	if (root == NULL || root->key == key) 
	return root; 

	// Key is greater than root's key 
	if (root->key < key) 
	return search(root->right, key); 

	// Key is smaller than root's key 
	return search(root->left, key); 
} 

// Driver Program to test above functions 
int main() 
{ 
	/* Let us create following BST 
		  50 
		/	 \ 
		30	 70 
		/ \ / \ 
	20 40 60 80 */
	struct Node *root = NULL; 
	root = insert(root, 50); 
	root = insert(root, 30); 
	root = insert(root, 20); 
	root = insert(root, 40); 
	root = insert(root, 70); 
	root = insert(root, 60); 
	root = insert(root, 80); 

	cout<<"Inorder traversal of the given tree \n"; 
	inorder(root); 

	cout<<"\nDelete 20\n"; 
	root = deleteNode(root, 20); 
	cout<<"Inorder traversal of the modified tree \n"; 
	inorder(root); 

	cout<<"\nDelete 30\n"; 
	root = deleteNode(root, 30); 
	cout<<"Inorder traversal of the modified tree \n"; 
	inorder(root); 

	cout<<"\nDelete 50\n"; 
	root = deleteNode(root, 50); 
	cout<<"Inorder traversal of the modified tree \n"; 
	inorder(root); 

	cout<<"\nSearch for 40 \n"; 
	struct Node *res = search(root, 40); 
	(res == NULL)? cout<<"Not Found" : cout<<"Found"; 

	return 0; 
}