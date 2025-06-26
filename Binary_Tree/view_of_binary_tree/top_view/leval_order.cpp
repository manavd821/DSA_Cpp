#include<iostream>
#include<queue> 
#include <vector>
#include <algorithm> // for std::min and std::max
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
    std::vector<int> topView(Node *root) {
        // code here
        int left = 0, right = 0;
        find_left_right(root, left, right, 0);
        int size = right-left+1;
        std::vector<int>ans(size);
        std::vector<int>filled(size, 0);
        std::queue<int>idx;
        std::queue<Node*>q;
        q.push(root);
        idx.push(-left);
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            int index = idx.front();
            idx.pop();
            if(temp->left){
                q.push(temp->left);
                idx.push(index-1);
            }
            if(temp->right){
                q.push(temp->right);
                idx.push(index+1);
            }
            if(!filled[index]){//first time
                filled[index] ++;
                ans[index] = temp->data;
            }
        }
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