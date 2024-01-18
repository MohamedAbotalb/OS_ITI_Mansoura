#include <iostream>

using namespace std;

class Stack {
    int size;
    int* items;
    int top;
public:
    Stack(int _size) {
        size = _size;
        items = new int[size];
        top = -1;
    }
    Stack(Stack& s) {
        size = s.size;
        items = new int[size];
        top = s.top;
        for (int i = 0; i <= top; i++) {
            items[i] = s.items[i];
        }
    }
    int getTop() {
        return top;
    }
    int* getItems() {
        return items;
    }
    int isFull() {
        if (top == size - 1) return 1;
        else return 0;
    }
    int isEmpty() {
        if (top == -1) return 1;
        else return 0;
    }
    void push(int data) {
        if (isFull())
            cout << "Stack is full" << endl;
        else
            items[++top] = data;
    }
    int pop(int& data) {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        else {
            data = items[top--];
            return 1;
        }
    }
    int getTopElement(int& data) {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return 0;
        } else {
            data = items[top];
            return 1;
        }
    }
    ~Stack() {
        delete [] items;
    }
};

void viewStackElements(Stack&);
void printPoppedElements(Stack&);

int main()
{
    Stack s1(5), s2(s1);

    cout << "Stack 1" << endl;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    viewStackElements(s1);
    cout << endl;
    printPoppedElements(s1);

    cout << endl << "Stack 2" << endl;

    s2.push(2);
    s2.push(4);
    s2.push(6);
    viewStackElements(s2);
    cout << endl;
    printPoppedElements(s2);

    return 0;
}

void viewStackElements(Stack& s) {
    if (s.isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        for (int i = s.getTop(); i >= 0; i--) {
            cout << "Stack Element no " << i + 1 << " = " << s.getItems()[i] << endl;
        }
    }
}

void printPoppedElements(Stack& s) {
    if (s.isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        int element;
        while (s.pop(element)) {
            cout << "Popped Element = " << element << endl;
            if (s.getTop() != -1 && s.getTopElement(element)) // should check top is not equal to -1 before getTopElement
                cout << "Top element now = " << element << endl;
        }
    }
}
