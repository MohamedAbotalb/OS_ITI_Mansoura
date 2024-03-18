#include <iostream>

using namespace std;

class ArrayCircularQueue {
    int *ptr, size, front, rear;

public:
    ArrayCircularQueue(int _size = 5) {
        size = _size;
        ptr = new int[size];
        front = rear = -1;
    }

    int isEmpty() {
        return front == -1;
    }

    int isFull() {
        return (front == 0 && rear == size - 1) || rear == front - 1;
    }

    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is Full" << endl;
            return;
        }

        if (front == -1) front = rear = 0;
        else if (rear == size - 1) rear = 0;
        else rear++;

        ptr[rear] = data;
    }

    int dequeue(int& data) {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return 0;
        }

        data = ptr[front];

        if (front == rear) front = rear = -1;
        else if (front == size - 1) front = 0;
        else front++;

        return 1;
    }

    ~ArrayCircularQueue() {
        delete ptr;
    }
};

int main()
{
    ArrayCircularQueue myQueue;

    myQueue.enqueue(1);
    myQueue.enqueue(2);
    myQueue.enqueue(3);
    myQueue.enqueue(4);
    myQueue.enqueue(5);
    myQueue.enqueue(6); // print the Queue is full

    int data = 0;
    if (myQueue.dequeue(data)) cout << "Queue data = " << data << endl;

    if (myQueue.dequeue(data)) cout << "Queue data = " << data << endl;

    if (myQueue.dequeue(data)) cout << "Queue data = " << data << endl;

    if (myQueue.dequeue(data)) cout << "Queue data = " << data << endl;

    if (myQueue.dequeue(data)) cout << "Queue data = " << data << endl;

    if (myQueue.dequeue(data)) cout << "Queue data = " << data << endl;


    return 0;
}
