#include <iostream>
#include <string.h>

using namespace std;

struct Node {
    int id;
    char name[10];
    Node* next;
};

class LinkedListQueue {
    Node *front, *rear;

public:
    LinkedListQueue() {
        front = rear = NULL;
    }

    void enqueue(int id, char* name) {
        Node* temp = new Node();
        if (!temp) return;
        temp->id = id;
        strcpy(temp->name, name);

        temp->next = NULL;
        if (!front) {
            front = rear = temp;
        }
        else {
            rear->next = temp;
            rear = temp;
        }
    }

    Node dequeue() {
        Node result;
        result.id = -1;

        if (front) {
            result.id = front->id;
            strcpy(result.name, front->name);

            Node* temp = front;
            front = front->next;
            delete temp;
        }
        else {
            rear = NULL;
        }

        return result;
    }

    int isEmpty() {
        return !front;
    }

    int isFull() {
        Node* temp = new Node();
        if (!temp) return 1;
        else {
            delete temp;
            return 0;
        }
    }

};

int main()
{
    LinkedListQueue myQueue;

    if (myQueue.isEmpty()) cout << "Queue is Empty" << endl;

    if (myQueue.isFull()) cout << "Queue is Full" << endl;

    myQueue.enqueue(1, "Mohamed");
    myQueue.enqueue(2, "Ahmed");
    myQueue.enqueue(3, "Ali");
    myQueue.enqueue(4, "Mahmoud");

    Node res;
    res = myQueue.dequeue();
    cout << "ID: " << res.id << " Name: " << res.name << endl;

    res = myQueue.dequeue();
    cout << "ID: " << res.id << " Name: " << res.name << endl;

    res = myQueue.dequeue();
    cout << "ID: " << res.id << " Name: " << res.name << endl;

    res = myQueue.dequeue();
    cout << "ID: " << res.id << " Name: " << res.name << endl;

    if (myQueue.isEmpty()) cout << "Queue is Empty" << endl;
    return 0;
}
