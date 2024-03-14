#include "node.h"
class List {
public:
    virtual void add(node *) = 0;  // Change parameter type to node
    virtual node *get(int) = 0;    // Update return type to node*
    virtual node *remove(int) = 0; // Update return type to node*
    virtual int getSize() = 0;
    virtual void print() = 0; // Ensure it can handle nodes when printing
};
