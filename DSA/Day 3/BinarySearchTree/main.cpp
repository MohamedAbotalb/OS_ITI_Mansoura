#include <iostream>

using namespace std;

struct Node {
    int id;
    Node* left;
    Node* right;
};

class BinarySearchTree {
    Node* root;
    Node* findParent(int id) {
        Node* temp = root;

        while(temp) {
            if ((id <= temp->id && !temp->left) || (id > temp->id && !temp->right))
                return temp;
            else if (id <= temp->id) {
                temp = temp->left;
            }
            else if (id > temp->id) {
                temp = temp->right;
            }
        }
    }
    void inorder(Node* r) {
        if (!r) return;
        inorder(r->left);
        cout << r->id << ", ";
        inorder(r->right);
    }

public:
    BinarySearchTree() {
        root = NULL;
    }

    void add(int id) {
        Node* temp = new Node();

        temp->id = id;
        temp->left = NULL;
        temp->right = NULL;

        if (!root) root = temp;
        else {
            Node* parent = findParent(id);

            if (id < parent->id) parent->left = temp;
            else parent->right = temp;
        }
    }
    void traverse() {
        inorder(root);
    }
};

int main()
{
    BinarySearchTree myTree;

    myTree.add(100);
    myTree.add(40);
    myTree.add(60);
    myTree.add(80);
    myTree.add(20);
    myTree.add(30);
    myTree.add(10);

    myTree.traverse(); // 10, 20, 30, 40, 60, 80, 100,
    return 0;
}
