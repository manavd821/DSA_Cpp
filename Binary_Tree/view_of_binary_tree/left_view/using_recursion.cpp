#include<iostream>
#include <vector>
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
void Lview(Node *root, int level, std::vector<int> &ans) {
    if (root == nullptr) {
        return;
    }
    if (level == ans.size()) {
        ans.push_back(root->data);
    }
    Lview(root->left, level + 1, ans);
    Lview(root->right, level + 1, ans);
}
std::vector<int> leftView(Node *root) {
    std::vector<int> result;
    if (root == nullptr) {
        return result;
    }
    Lview(root, 0, result);
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