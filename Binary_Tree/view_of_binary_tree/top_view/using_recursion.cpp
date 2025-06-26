#include<iostream>
#include <vector>
#include <algorithm> // for std::min and std::max
#include <climits> // for INT_MAX
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
void find_left_right(Node* root, int &left, int &right, int pos){
        if(!root) return;

        left = std::min(left, pos);
        right = std::max(right, pos);
        find_left_right(root->left, left, right, pos-1);
        find_left_right(root->right, left, right, pos+1);
    }
    void Tview(Node* root, std::vector<int>&ans, std::vector<int>&check_level, int idx, int level){
        if(!root) return;
        if(check_level[idx] > level){
            check_level[idx] = level;
            ans[idx] = root->data;
        }
        Tview(root->left, ans, check_level, idx-1, level+1);
        Tview(root->right, ans, check_level, idx+1, level+1);
    }
    std::vector<int> topView(Node *root) {
        // code here
        int left = 0, right = 0;
        find_left_right(root, left, right, 0);
        int size = right-left+1;
        std::vector<int>ans(size);
        std::vector<int>check_level(size, INT_MAX);
        Tview(root, ans, check_level, -left, 0);
        return ans;
    }
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    std::vector<int> top_view = topView(root);

    std::cout << "Top View of Binary Tree: ";
    for (int value : top_view) {
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