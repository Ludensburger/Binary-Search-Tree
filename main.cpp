#include "mybintree.h"
#include <iostream>

using namespace std;

int main() {
    // Create an instance of MyBinaryTree
    MyBinaryTree *tree = new MyBinaryTree();

    // Insert nodes into the binary tree
    // Insert nodes into the binary tree
    tree->root = tree->insert(tree->getRoot(), 50); // root node
    tree->insert(tree->root, 10);
    tree->insert(tree->root, 20);
    tree->insert(tree->root->left, 30);  // Insert 30 as left child of 20
    tree->insert(tree->root->right, 40); // Insert 40 as left child of 30
    tree->insert(tree->root, 6570);
    tree->insert(tree->root, 340);

    // Print the binary tree using BFS
    cout << "BFS traversal: ";
    tree->BFS();

    // Print the binary tree using DFS
    cout << "DFS traversal: ";
    tree->DFS();

    // Searching for a key
    int key = 40;
    node *result = tree->search(tree->getRoot(), key);
    if (result == nullptr)
        cout << key << " not found" << endl;
    else
        cout << key << " found" << endl;

    return 0;
}