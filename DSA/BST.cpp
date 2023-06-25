// create a c++ program to insert , delete and search in BST

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* newNode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to perform insertion in BST
Node* insert(Node* root, int data)
{
    if (root == NULL)
        return newNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

// Function to perform deletion in BST
Node* deleteNode(Node* root, int data)
{
    
    // Base case
    if (root == NULL)
        return root;

    /* If the data to be deleted is smaller than the root
    data then it lies in left subtree */
    if (data < root->data)
        root->left = deleteNode(root->left, data);

    /* If the data to be deleted is greater than the root
     data then it lies in right subtree */
    else if (data > root->data)
        root->right = deleteNode(root->right, data);

    /* If data is same as root's data, then this is the node
    to be deleted */
    else
    {
        // Node with only one child or no child
        if (root->left == NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        /* Node with two children: Get the inorder successor (smallest
        in the right subtree) */
        
        Node* temp = minValueNode(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
    
    
} 



// Function to search a node in BST
bool search(Node* root, int data)
{
    if (root == NULL)
        return false;
    else if (root->data == data)
        return true;
    else if (data <= root->data)
        return search(root->left, data);
    else
        return search(root->right, data);
}

// Main function
int main()
{
    Node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    // root = deleteNode(root, 20);
    // root = deleteNode(root, 30);
    // root = deleteNode(root, 50);

    if (search(root, 50))
        cout << "Found\n";
    else
        cout << "Not Found\n";

    return 0;
}