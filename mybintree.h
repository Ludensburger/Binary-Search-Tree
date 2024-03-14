#include "arrayqueue.h"
#include "binarytree.h"
#include "node.h"
#include <iostream>
#include <stack>

using namespace std;

class MyBinaryTree : public BinaryTree {
private:
    ArrayQueue queue;

public:
    node *root;
    int size;

    MyBinaryTree() {
        root = nullptr;
        size = 0;
    }

    node *getRoot() {
        return root;
    }

    // Override the BFS method to enqueue and dequeue node pointers
    void BFS() {
        if (!root) {
            cout << "Tree is empty" << endl;
            return;
        }

        queue.enqueue(root);

        while (!queue.isEmpty()) {
            node *curr = queue.dequeue();

            cout << curr->elem << " ";

            if (curr->left) {
                queue.enqueue(curr->left);
            }

            if (curr->right) {
                queue.enqueue(curr->right);
            }
        }

        cout << endl;
    }

    // Implement the DFS method
    void DFS() {
        if (!root) {
            cout << "Tree is empty" << endl;
            return;
        }

        stack<node *> s;
        s.push(root);

        while (!s.empty()) {
            node *curr = s.top();
            s.pop();

            cout << curr->elem << " ";

            if (curr->right) {
                s.push(curr->right);
            }

            if (curr->left) {
                s.push(curr->left);
            }
        }

        cout << endl;
    }

    // Implement the search method
    node *search(node *currnode, int key) override {
        if (!currnode || currnode->elem == key) {
            return currnode;
        }

        if (key < currnode->elem) {
            return search(currnode->left, key);
        }

        return search(currnode->right, key);
    }

    // Implement the insert method
    node *insert(node *currnode, int key) override {
        if (!currnode) {
            // If the current node is null, create a new node and return it.
            node *newNode = new node;
            newNode->elem = key;
            newNode->left = nullptr;
            newNode->right = nullptr;
            size++;
            return newNode;
        }

        if (key < currnode->elem) {
            // If the key is less than the current node's value, recursively insert into the left subtree.
            currnode->left = insert(currnode->left, key);
        } else if (key > currnode->elem) {
            // If the key is greater than the current node's value, recursively insert into the right subtree.
            currnode->right = insert(currnode->right, key);
        }

        // Return the current node after insertion.
        return currnode;
    }

    // Override the print method
    void print() override {
        cout << "Size: " << size << endl;
        printNode(root, 0, "Root");
    }

    // Implement the printNode method with indentation
    void printNode(node *n, int depth, string label) {
        if (n) {
            for (int i = 0; i < depth; ++i) {
                cout << "|   ";
            }
            cout << "+--" << label << ": " << n->elem << endl;
            if (n->left) {
                printNode(n->left, depth + 1, "L");
            }

            if (n->right) {
                printNode(n->right, depth + 1, "R");
            }
        }
    }
};
