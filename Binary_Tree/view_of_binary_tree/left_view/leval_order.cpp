#include<iostream>
#include <vector>
#include <queue>
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
std::vector<int> leftView(Node *root) {
    std::vector<int> result;
    std::queue<Node*> q;
    if (root == nullptr) {
        return result;
    }
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        for(int i = 0; i < size; i++) {
            Node* current = q.front();
            q.pop();
            if (current->left != nullptr) {
                q.push(current->left);
            }
            if (current->right != nullptr) {
                q.push(current->right);
            }
            if(i == 0) { // Only add the first node of each level
                result.push_back(current->data);
            }
        }
    }
    return result;
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    std::vector<int> left_view = leftView(root);
    
    std::cout << "Left View of Binary Tree: ";
    for (int value : left_view) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Clean up memory
    delete root->left->left;
    delete root->left->right;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
