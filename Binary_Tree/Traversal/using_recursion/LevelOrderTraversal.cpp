// level order traversal of a binary tree using a queue
#include <iostream>
#include <vector>
#include <queue>
class Node{
    public:
    int data;
    Node *left, *right;
    Node():data(0),left(nullptr),right(nullptr){};
    Node(int val):data(val),left(nullptr),right(nullptr){};
};
Node* createBinaryTree(){
    int x;
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
std::vector<int> levelOrder(Node* root) {
    std::vector<int>ans;
    if(!root) return ans;
    std::queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        ans.push_back(q.front()->data);
        
        if(q.front()->left) q.push(q.front()->left);
        
        if(q.front()->right) q.push(q.front()->right);
        
        q.pop();
    }
    return ans;
}
int main(){
    std::cout<<"Enter root:";
    Node* root = createBinaryTree();
    std::vector<int> ans = levelOrder(root);
    std::cout<<"Level-order Traversal: ";
    for(int i=0;i<ans.size();i++){
        std::cout<<ans[i]<<" ";
    }
    return 0;
}