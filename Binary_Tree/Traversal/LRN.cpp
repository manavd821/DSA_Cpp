// post order traversal of a binary tree
// 1) Traverse the left subtree (L)
// 2) Traverse the right subtree (R)    
// 3) Visit the root node (N)
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
void LRN(Node* root,std:: vector<int>&ans){
        if(!root){
            return;
        }
        LRN(root->left,ans);
        LRN(root->right,ans);
        ans.push_back(root->data);
    }
    // Function to return a list containing the postorder traversal of the tree.
   std:: vector<int> postOrder(Node* root) {
        // Your code here
        std::vector<int>ans;
        LRN(root, ans);
        return ans;
    }
int main(){
    std::cout<<"Enter root:";
    Node* root = createBinaryTree();
    std::vector<int> ans = postOrder(root);
    std::cout<<"Post-order Traversal (LRN): ";
    for(int i=0;i<ans.size();i++){
        std::cout<<ans[i]<<" ";
    }
    return 0;
}