#include "binarytree.h"
// #include "node.h"
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <queue>
#include <stack>
#include <stdexcept>
using namespace std;

class MyBinaryTree : public BinaryTree {
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

    void BFS() {
        if (!root) {
            cout << "Tree is empty" << endl;
            return;
        }

        queue<node *> q;
        q.push(root);

        while (!q.empty()) {
            node *curr = q.front();
            q.pop();

            cout << curr->elem << " ";

            if (curr->left) {
                q.push(curr->left);
            }

            if (curr->right) {
                q.push(curr->right);
            }
        }

        cout << endl;
    }

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

    node *search(node *currnode, int key) {
        if (!currnode || currnode->elem == key) {
            return currnode;
        }

        if (key < currnode->elem) {
            return search(currnode->left, key);
        }

        return search(currnode->right, key);
    }

    node *insert(node *currnode, int key) {
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

    void print() {
        cout << "Size: " << size << endl;
        cout << "Root: ";
        print(root);
    }

    void print(node *n) {
        if (n) {
            cout << n->elem << endl;
            if (n->left) {
                cout << "-L: ";
                print(n->left);
            }

            if (n->right) {
                cout << "-R: ";
                print(n->right);
            }
        }
    }
};