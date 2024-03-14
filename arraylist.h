#include "list.h"
#include "node.h" // Ensure you include the node.h file
#include <iostream>
#include <stdexcept>
using namespace std;

class ArrayList : public List {
private:
    node *array[10]; // Array of node pointers
    int size_;

public:
    ArrayList() {
        size_ = 0;
    }

    void add(node *value) override { // Override the add method from the List interface
        if (size_ == 10) {
            throw std::runtime_error("Array is full");
        }
        array[size_] = value;
        size_++;
    }

    node *get(int index) { // Update return type to node*
        if (index < 0 || index >= size_) {
            throw runtime_error("Index out of bounds");
        }
        return array[index];
    }

    node *remove(int index) { // Update return type to node*
        if (index < 0 || index >= size_) {
            throw runtime_error("Index out of bounds");
        }
        node *value = array[index];
        for (int i = index; i < size_ - 1; i++) {
            array[i] = array[i + 1];
        }
        size_--;
        return value;
    }

    int getSize() override {
        return size_;
    }

    void print() {
        for (int i = 0; i < size_; i++) {
            cout << array[i]->elem << " "; // Assuming elem is the element in your node struct
        }
        cout << endl;
    }
};
