// In-order Traversal (LNR) of a binary tree is a common traversal method where the order of visiting nodes is:
// 1. Traverse the left subtree (L) 
// 2. Visit the root node (N)
// 3. Traverse the right subtree (R)
#include<iostream>
#include<vector>
class Node{
    public:
    int data;
    Node *left, *right;
    Node():data(0),left(nullptr),right(nullptr){};
    Node(int val):data(val),left(nullptr),right(nullptr){};
};
Node* createBinaryTree(){
    int x;;
    std::cin>>x;
    if(x == -1){
        return NULL;
    }
    Node* temp = new Node(x);
    std::cout<<"left child of "<<x<<" :";
    temp->left = createBinaryTree();//left
    std::cout<<"right child of "<<x<<" :";
    temp->right = createBinaryTree();
    return temp;
}
void LNR(Node* root, std::vector<int>&ans){
        if(!root){
            return;
        }
        //left side
        LNR(root->left, ans);
        ans.push_back(root->data);
        LNR(root->right, ans);
    }
std::vector<int> inOrder(Node* root) {
    std::vector<int> ans;
    LNR(root, ans);
    return ans;
}
int main(){
    std::cout<<"Enter root:";
    Node* root = createBinaryTree();
    std::vector<int> ans = inOrder(root);
    std::cout<<"In-order Traversal (LNR): ";
    for(int i=0;i<ans.size();i++){
        std::cout<<ans[i]<<" ";
    }
    return 0;
}