#include "arraylist.h" // Assuming ArrayQueue is based on ArrayList
#include "queue.h"

class ArrayQueue : public Queue {
private:
    ArrayList *list;

public:
    ArrayQueue() {
        list = new ArrayList();
    }

    void enqueue(node *value) override {
        list->add(value);
    }

    node *dequeue() override {
        if (list->getSize() == 0) {
            throw std::runtime_error("Queue is empty");
        }
        node *value = static_cast<node *>(list->get(0));
        list->remove(0);
        return value;
    }

    node *get(int index) override {
        return static_cast<node *>(list->get(index));
    }

    int size() override {
        return list->getSize();
    }

    bool isEmpty() override {
        return list->getSize() == 0;
    }

    void print() override {
        list->print();
    }
};