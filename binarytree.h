#include "node.h"

class BinaryTree {
public:
    virtual node *insert(node *, int) = 0; // Change parameter type to node*
    virtual node *search(node *, int) = 0; // Change parameter type to node* and return type to node*
    virtual node *getRoot() = 0;
    virtual void print() = 0;
    virtual void print(node *) = 0; // Optional: Depending on your needs, you can remove one print method if it's redundant
    virtual void BFS() = 0;
    virtual void DFS() = 0;
    // virtual node* removeNode(node*, int) = 0;   // You can add this method if needed, but it's commented out for now
};
