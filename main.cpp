#include "mybintree.h"
#include <iostream>

using namespace std;

int main() {
    // Create an instance of MyBinaryTree
    MyBinaryTree *tree = new MyBinaryTree();

    char op;
    int value;
    cout << "\n\nBinary Search Tree Operations\n";
    cout << "a value - Insert Node \n";
    cout << "\tExample: a50 " << endl;
    cout << "b - BFS Traversal \n";
    cout << "d - DFS Traversal \n";
    cout << "p - Print Tree \n";
    cout << "x - Exit \n";



    do {

        cout << "Op: ";
        cin >> op;

        switch (op) {
        case 'a':
            cin >> value;
            tree->root = tree->insert(tree->getRoot(), value);
            break;
        case 'b':
            cout << "BFS traversal: ";
            tree->BFS();
            break;
        case 'd':
            cout << "DFS traversal: ";
            tree->DFS();
            break;
        case 'p':
            cout << "Printing tree: ";
            tree->print();
            break;
        case 'x':
            cout << "Exiting program.";
            break;
        default:
            cout << "Invalid input.\n";
        }
    } while (op != 'x');
    return 0;
}