// In-order Traversal (LNR) of a binary tree is a common traversal method where the order of visiting nodes is:
// 1. Traverse the left subtree (L) 
// 2. Visit the root node (N)
// 3. Traverse the right subtree (R)
#include<iostream>
#include<vector>
#include<stack>
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

std::vector<int> inOrder(Node* root) {
        // code here
        std::vector<int>ans;
        std::stack<Node*>st;
        std::stack<bool>visited;
        st.push(root);
        visited.push(0);
        while(!st.empty()){
            Node* temp = st.top();
            st.pop();
            int flag = visited.top();
            visited.pop();
            if(!flag){
            // means not visited => RNL for stack
                //Right 
                if(temp->right){
                    st.push(temp->right);
                    visited.push(0);
                }
                // Current N
                st.push(temp);
                visited.push(1); //because now it is visited
                // Left
                if(temp->left){
                    st.push(temp->left);
                    visited.push(0);
                }
            }
            else{
                ans.push_back(temp->data);
            }
        }
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