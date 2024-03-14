#include "mybintree.h"
#include <iostream>

using namespace std;

int main() {
    // Create an instance of MyBinaryTree
    MyBinaryTree *tree = new MyBinaryTree();

    // Insert nodes into the binary tree

    // Insert 50 as the root node
    tree->root = tree->insert(tree->getRoot(), 50);

    // Insert nodes sequentially
    node *root = tree->getRoot();

    // left
    node *node10 = tree->insert(root, 10);
    // right
    node *node20 = tree->insert(root, 20);

    // right of 20
    node *node15 = tree->insert(node20, 30);
    node *node30 = tree->insert(node20, 15);
    // right of 30
    node *node40 = tree->insert(node30, 40);
    node *node65 = tree->insert(root, 65);
    node *node999 = tree->insert(node10, 999);
    node *node340 = tree->insert(root, 340);

    // Print the binary tree using BFS
    cout << "BFS traversal: ";
    tree->BFS();

    // Print the binary tree using DFS
    cout << "DFS traversal: ";
    tree->DFS();

    tree->print();

    // Searching for a key
    int key = 40;
    node *result = tree->search(tree->getRoot(), key);
    if (result == nullptr)
        cout << key << " not found" << endl;
    else
        cout << key << " found" << endl;

    return 0;
}