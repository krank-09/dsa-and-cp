// Depth-first (inorder) traversal of a binary tree.

// implement depth first search (DFS) algorithm for a binary tree using C++
#include <iostream>
using namespace std;
// Define the structure for a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {} 
};
// Function to perform DFS on the binary tree (inorder traversal)
void dfs(Node* root) {
    if (!root) return;
    dfs(root->left);
    cout << root->data << " ";
    dfs(root->right);   
}
// Main function to test the DFS implementation
int main() {
    // Create a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);     
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // Perform DFS
    cout << "Depth First Search (DFS) traversal of the binary tree: ";
    dfs(root);
    cout << endl;
    // Clean up memory (not shown for brevity)
    return 0;
}
