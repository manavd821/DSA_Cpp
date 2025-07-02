// Pre-Order Traversal (NLR) of a binary tree is a common traversal method where the order of visiting nodes is:
// 1. Visit the root node (N)
// 2. Traverse the left subtree (L)
// 3. Traverse the right subtree (R)
#include<iostream>
#include<vector>
class Node{
    public:
    int data;
    Node *left, *right;
    Node():data(0),left(NULL),right(NULL){};
    Node(int val):data(val),left(NULL),right(NULL){};
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
void binaryTree(Node* root,std::vector<int>& ans){
        if(!root){
            return;
        }
        ans.push_back(root->data);
        binaryTree(root->left, ans);//go left
        binaryTree(root->right, ans);//go right
    }
    // Function to return a list containing the preorder traversal of the tree.
std::vector<int> preorder(Node* root) {
        // write code here
        std::vector<int>ans;
        binaryTree(root, ans);
        return ans;
    }
int main(){
    std::cout<<"Enter root:";
    Node* root = createBinaryTree();
    std::vector<int>ans = preorder(root);
    std::cout<<"Pre-order Traversal (NLR): ";
    for(int i=0;i<ans.size();i++){
        std::cout<<ans[i]<<" ";
    }
    return 0;
}