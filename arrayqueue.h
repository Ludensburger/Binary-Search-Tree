#include "arraylist.h"
#include "list.h"
#include "queue.h"
#include <iostream>
#include <queue>
#include <stack>
#include <stdexcept>

class ArrayQueue : public Queue {
private:
    ArrayList *list;

public:
    ArrayQueue() {
        list = new ArrayList();
    }

    void enqueue(int value) {
        list->add(value);
    }

    int dequeue() {
        if (list->getSize() == 0) {
            throw std::runtime_error("Queue is empty");
        }
        int value = list->get(0);
        list->remove(0);
        return value;
    }

    int get(int index) {
        return list->get(index);
    }

    int size() {
        return list->getSize();
    }

    bool isEmpty() {
        return list->getSize() == 0;
    }

    void print() {
        list->print();
    }
};