class Queue {
public:
    virtual void enqueue(int) = 0;
    virtual int dequeue() = 0;
    virtual int get(int) = 0;
    virtual int size() = 0;
    virtual bool isEmpty() = 0;
    virtual void print() = 0;
};
