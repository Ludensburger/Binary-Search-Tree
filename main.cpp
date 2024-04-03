#include "mybintree.h"
#include <iostream>

using namespace std;

int main() {
    // Create an instance of MyBinaryTree
    MyBinaryTree *tree = new MyBinaryTree();

    int choice, value;
    while (true) {
        cout << "\n\nBinary Search Tree Operations\n";
        cout << "1. Insert Node \n";
        cout << "2. BFS Traversal \n";
        cout << "3. DFS Traversal \n";
        cout << "4. Print Tree \n";
        cout << "5. Exit \n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter the value to be inserted: ";
            cin >> value;
            tree->root = tree->insert(tree->getRoot(), value);
            break;
        case 2:
            cout << "BFS traversal: ";
            tree->BFS();
            break;
        case 3:
            cout << "DFS traversal: ";
            tree->DFS();
            break;

        case 4:
            cout << "Printing tree: ";
            tree->print();
            break;
        case 5:
            exit(0);
        default:
            cout << "Invalid choice, please try again.\n";
        }
    }

    return 0;
}