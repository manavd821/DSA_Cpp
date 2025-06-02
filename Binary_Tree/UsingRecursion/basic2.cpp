#include<iostream>
#include<vector>
#include<stack>
class Node{
    public:
    int val;
    Node *left, *right;
    Node():val(0),left(NULL),right(NULL){};
    Node(int val):val(val),left(NULL),right(NULL){};
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
int main(){
    std::cout<<"Enter root:";
    Node* root = createBinaryTree();
}