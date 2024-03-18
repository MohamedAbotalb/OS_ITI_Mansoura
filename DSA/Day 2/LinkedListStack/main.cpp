#include <iostream>
#include <string.h>

using namespace std;

struct Node {
    int id;
    char name[10];
    Node* prev;
};

class LinkedListStack {
    Node* top;

public:
    LinkedListStack() {
        top = NULL;
    }

    void push(int id, char* name) {
        Node* temp = new Node();
        if (!temp) return;

        temp->id = id;
        strcpy(temp->name,name);

        temp->prev = top;
        top = temp;
    }

    Node pop() {
        Node result;
        result.id = -1;

        if (top) {
            result.id = top->id;
            strcpy(result.name, top->name);

            Node* temp = top;
            top = top->prev;
            delete temp;
        }
        return result;
    }

    int isEmpty() {
        return !top;
    }

    int isFull() {
        Node* temp = new Node();
        if (!temp) return 1; // memory is full cannot create new node
        else {
            delete temp;
            return 0; // memory is not full and can create new node
        }
    }
};

int main()
{
    LinkedListStack myStack;

    if (myStack.isEmpty()) cout << "Stack is Empty" << endl;

    if (myStack.isFull()) cout << "Stack is Full" << endl;

    myStack.push(1, "Mohamed");
    myStack.push(2, "Ahmed");
    myStack.push(3, "Ali");
    myStack.push(4, "Mahmoud");

    Node res;
    res = myStack.pop();
    cout << "ID: " << res.id << " Name: " << res.name << endl;

    res = myStack.pop();
    cout << "ID: " << res.id << " Name: " << res.name << endl;

    res = myStack.pop();
    cout << "ID: " << res.id << " Name: " << res.name << endl;

    res = myStack.pop();
    cout << "ID: " << res.id << " Name: " << res.name << endl;

    if (myStack.isEmpty()) cout << "Stack is Empty" << endl;
    return 0;
}
