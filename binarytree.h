#include "node.h"

class BinaryTree {
public:
    virtual node* insert(node*, int) = 0;
    virtual node* search(node*, int) = 0;
    virtual void print() = 0;
    virtual void print(node*) = 0;
//    virtual node* removeNode(node*, int) = 0;
};