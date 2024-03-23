#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
class BST {
private:
    Node* root;
    Node* insertRecursive(Node* root, int val) {
        if (root == nullptr) {
            return new Node(val);
        }

        if (val < root->data) {
            root->left = insertRecursive(root->left, val);
        } else if (val > root->data) {
            root->right = insertRecursive(root->right, val);
        }
        
        return root;
    }
    void inorderRecursive(Node* root) {
        if (root == nullptr) {
            return;
        }
        inorderRecursive(root->left);
        cout << root->data << " ";
        inorderRecursive(root->right);
    }
    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != nullptr) {
            current = current->left;
        }
        return current;
    }
    Node* deleteRecursive(Node* root, int key) {
        if (root == nullptr) {
            return root;
        }

        if (key < root->data) {
            root->left = deleteRecursive(root->left, key);
        } else if (key > root->data) {
            root->right = deleteRecursive(root->right, key);
        } else {
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            Node* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteRecursive(root->right, temp->data);
        }
        return root;
    }

public:
    BST() {
        root = nullptr;
    }
    void insert(int val) {
        root = insertRecursive(root, val);
    }
    void inorder() {
        inorderRecursive(root);
        cout << endl;
    }
    void remove(int key) {
        root = deleteRecursive(root, key);
    }
};

int main() {
    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    cout << "Inorder traversal of the BST: ";
    tree.inorder();

    cout << "Deleting 20 from the BST." << endl;
    tree.remove(20);
    cout << "Inorder traversal of the modified BST: ";
    tree.inorder();

    return 0;
}

