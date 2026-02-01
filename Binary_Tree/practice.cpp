#include<iostream>
#include<vector>
#include<queue>

class Node{
    public:
    int val;
    Node* left, *right;

    Node(): val(0), left(nullptr), right(nullptr){};
    Node(int val): val(val), left(nullptr), right(nullptr){};
};
void LNR(Node* root, std::vector<int>&ans){
    if(!root){
        return;
    }
    //left side
    LNR(root->left, ans);
    ans.push_back(root->val);
    LNR(root->right, ans);
}
void binaryTree(Node* root,std::vector<int>& ans){
        if(!root){
            return;
        }
        ans.push_back(root->val);
        binaryTree(root->left, ans);//go left
        binaryTree(root->right, ans);//go right
}

std::vector<int> preorder(Node* root) {
        // write code here
        std::vector<int>ans;
        binaryTree(root, ans);
        return ans;
    }
int main(){
    std::queue<Node*>q;
    std::cout<<"Enter value of root Node: ";
    int val;
    std::cin>>val;
    Node* root = new Node(val);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        int first;
        std::cout<<"Enter left Node of "<<temp->val<<": ";
        std::cin>>first;
        if(first != -1){
            temp -> left = new Node(first);
            q.push(temp->left);
        }
        int second;
        std::cout<<"Enter right Node of "<<temp->val<<": ";
        std::cin>>second;
        if(second != -1){
            temp -> right = new Node(second);
            q.push(temp->right);
        }
        q.pop();
    }
    std::vector<int> ans  = preorder(root);
    // LNR(root, ans);
    std::cout<<"In-order Traversal (LNR): ";
    for(int i=0;i<ans.size();i++){
        std::cout<<ans[i]<<" ";
    }
}