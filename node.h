#ifndef NODE_H
#define NODE_H

struct node {
    int elem;
    node *parent;
    node *left, *right;
};

#endif // NODE_H
