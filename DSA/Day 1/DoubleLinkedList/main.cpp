#include <iostream>
#include <string.h>

using namespace std;

struct Node {
    int id;
    char name[10];
    Node* prev;
    Node* next;
};

struct Person {
    int id;
    char name[10];
};

class DoubleLinkedList {
    Node* head;
    Node* tail;

public:
    DoubleLinkedList() {
        head = tail = NULL;
    }

    void append(int id, char* name) {
        Node* temp = new Node();
        temp->id = id;
        strcpy(temp->name, name);
        temp->prev = NULL;
        temp->next = NULL;

        // append new node at the beginning of the list
        if (!head) {
            head = tail = temp;
        }
        // append new node at the end of the list
        else {
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
    }

    // insert a new node after a specific node given its id
    void insertAfter(int nodeId, int id, char* name) {
        Node* searchNode = searchById(nodeId);
        if (!searchNode) {
            cout << "Not found node with id " << nodeId << endl;
            return;
        }
        Node* newNode = new Node();
        newNode->id = id;
        strcpy(newNode->name, name);
        newNode->next = searchNode->next;
        newNode->prev = searchNode;

        if (searchNode->next) {
            searchNode->next->prev = newNode;
        }

        searchNode->next = newNode;
    }

    void display() {
        Node* temp = head;

        while(temp) {
            cout << "ID: " << temp->id << " Name: " << temp->name << endl;
            temp = temp->next;
        }
    }

    int count() {
        Node* temp = head;
        int nodeCount = 0;

        while(temp) {
            nodeCount++;
            temp = temp->next;
        }
        return nodeCount;
    }

    Node* searchById(int id) {
        Node* temp = head;

        while(temp) {
            if (temp->id == id) {
                return temp;
            }
            temp = temp->next;
        }
        return NULL;
    }

    Person safeSearchById(int id) {
        Node* temp = searchById(id);
        Person p;
        if (temp) {
            p.id = temp->id;
            strcpy(p.name, temp->name);
        }
        else {
            p.id = -1;
        }

        return p;
    }

    void deleteById(int id) {
        Node* temp = searchById(id);
        // list conains only one node
        if (head == tail) {
            head = tail = NULL;
        }
        // delete the first node
        else if (temp == head) {
            head = head->next;
            head->prev = NULL;
        }
        // delete the last node
        else if (temp == tail) {
            tail = tail->prev;
            tail->next = NULL;
        }
        else {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }
    }
};

int main()
{
    DoubleLinkedList myList;

    myList.append(1, "Mohamed");
    myList.append(2, "Ahmed");
    myList.append(3, "Mahmoud");
    myList.append(4, "Ali");

    myList.insertAfter(3, 5, "Amr");
    myList.insertAfter(6, 6, "Medhat");

    myList.display();

    cout << "My List Count = " << myList.count() << endl;

    Person p = myList.safeSearchById(2);
    cout << "Person ID: " << p.id << " Name: " << p.name << endl;

    // delete the last node
    myList.deleteById(4);
    myList.display();
    return 0;
}
