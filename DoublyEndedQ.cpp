#include <iostream>
using namespace std;

// Simple circular deque implementation using a fixed-size array.
class Deque {
public:
    int* arr;
    int size;
    int front;
    int rear;

    // Constructor initializes an empty deque.
    Deque(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Destructor releases the allocated array.
    ~Deque() {
        delete[] arr;
    }

    // Check whether the deque is empty.
    bool isEmpty() const {
        return front == -1;
    }

    // Check whether the deque is full.
    bool isFull() const {
        return (front == 0 && rear == size - 1) || (rear + 1 == front);
    }

    // Insert an element at the rear of the deque.
    void pushRear(int data) {
        if (isFull()) {
            cout << "Deque is full, cannot insert!" << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else if (rear == size - 1 && front != 0) {
            rear = 0;
        } else {
            rear++;
        }

        arr[rear] = data;
    }

    // Insert an element at the front of the deque.
    void pushFront(int data) {
        if (isFull()) {
            cout << "Deque is full, cannot insert!" << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else if (front == 0) {
            front = size - 1;
        } else {
            front--;
        }

        arr[front] = data;
    }

    // Remove an element from the front of the deque.
    void popFront() {
        if (isEmpty()) {
            cout << "Deque is empty!" << endl;
            return;
        }

        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
    }

    // Remove an element from the rear of the deque.
    void popRear() {
        if (isEmpty()) {
            cout << "Deque is empty!" << endl;
            return;
        }

        if (front == rear) {
            front = rear = -1;
        } else if (rear == 0) {
            rear = size - 1;
        } else {
            rear--;
        }
    }

    // Get the current front element.
    int getFront() const {
        if (isEmpty()) {
            cout << "Deque is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    // Get the current rear element.
    int getRear() const {
        if (isEmpty()) {
            cout << "Deque is empty!" << endl;
            return -1;
        }
        return arr[rear];
    }
};

int main() {
    // Example usage of the deque.
    Deque dq(5);

    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushFront(5);
    dq.popRear();
    dq.popFront();

    return 0;
}
