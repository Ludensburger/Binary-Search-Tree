#include "list.h"

#include <iostream>
using namespace std;

class ArrayList : public List {
private:
    int array[10];
    int size_;

public:
    ArrayList() {
        size_ = 0;
    }

    void add(int value) {
        if (size_ == 10) {
            throw std::runtime_error("Array is full");
        }
        array[size_] = value;
        size_++;
    }

    int get(int index) {
        if (index < 0 || index >= size_) {
            throw std::runtime_error("Index out of bounds");
        }
        return array[index];
    }

    int remove(int index) {
        if (index < 0 || index >= size_) {
            throw std::runtime_error("Index out of bounds");
        }
        int value = array[index];
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
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
};
