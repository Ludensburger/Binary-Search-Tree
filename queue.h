#include "node.h"
class Queue {
public:
    virtual void enqueue(node *) = 0; // Change parameter type to node*
    virtual node *dequeue() = 0;      // Update return type to node*
    virtual node *get(int) = 0;       // Update return type to node*
    virtual int size() = 0;
    virtual bool isEmpty() = 0;
    virtual void print() = 0; // Ensure it can handle nodes when printing
};
