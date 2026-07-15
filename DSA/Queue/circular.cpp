#include <iostream>
#include <vector>
using namespace std;

class CircularQueue {
    vector<int> q;
    int front, rear, count, capacity;

public:
    CircularQueue(int size) {
        capacity = size;
        q.resize(size);
        front = 0;
        rear = -1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == capacity;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return;
        }
        rear = (rear + 1) % capacity;
        q[rear] = x;
        count++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }
        front = (front + 1) % capacity;
        count--;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return q[front];
    }

    int getRear() {
        if (isEmpty()) return -1;
        return q[rear];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }

        for (int i = 0; i < count; i++)
            cout << q[(front + i) % capacity] << " ";
        cout << endl;
    }
};

int main() {
    CircularQueue cq(5);

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);

    cq.display();

    cq.dequeue();
    cq.dequeue();

    cq.display();

    cq.enqueue(50);
    cq.enqueue(60);
    cq.enqueue(70);

    cq.display();

    cout << "Front: " << cq.getFront() << endl;
    cout << "Rear: " << cq.getRear() << endl;

    return 0;
}