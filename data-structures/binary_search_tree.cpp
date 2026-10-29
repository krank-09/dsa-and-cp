// Binary search tree: insert, search, delete and inorder traversal.

// implement a bst and 
// basic operations like insert, search, delete and inorder traversal using classes
#include <iostream>
using namespace std;
// Define the structure for a binary search tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
// Define the Binary Search Tree (BST) class
class BST {
private:
    Node* root;
    Node* insert(Node* node, int val) {
        if (!node) return new Node(val);
        if (val < node->data)
            node->left = insert(node->left, val);
        else
            node->right = insert(node->right, val);
        return node;
    }
    Node* search(Node* node, int val) {
        if (!node || node->data == val) return node;
        if (val < node->data)
            return search(node->left, val);
        return search(node->right, val);
    }
    Node* deleteNode(Node* node, int val) {
        if (!node) return node;
        if (val < node->data) {
            node->left = deleteNode(node->left, val);
        } else if (val > node->data) {
            node->right = deleteNode(node->right, val);
        } else {
            if (!node->left) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (!node->right) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            Node* temp = minValueNode(node->right);
            node->data = temp->data;
            node->right = deleteNode(node->right, temp->data);      
        }
        return node;
    }
    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left)
            current = current->left;
        return current;
    }
    void inorder(Node* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }
public:
    BST() : root(nullptr) {}
    void insert(int val) {
        root = insert(root, val);
    }
    Node* search(int val) {
        return search(root, val);
    }
    void deleteNode(int val) {
        root = deleteNode(root, val);
    }
    void inorder() {
        inorder(root);
    }
};
// Main function to test the BST implementation
int main() {
    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);    
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);
    cout << "Inorder traversal of the BST: ";
    tree.inorder();
    cout << endl;
    int key = 40;
    cout << "Searching for " << key << ": ";
    Node* result = tree.search(key);
    if (result)
        cout << "Found " << result->data << endl;
    else
        cout << "Not Found" << endl;        
    cout << "Deleting " << key << endl;
    tree.deleteNode(key);
    cout << "Inorder traversal after deletion: ";
    tree.inorder();
    cout << endl;
    return 0;
}