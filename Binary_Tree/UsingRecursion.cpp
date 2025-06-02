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
Node* createBinaryTree(Node* root, int first){
    int second = first;
    if(first == -1){
        return NULL;
    }

    //left element
    std::cout<<"Enter left Element of "<<first<<" :";
    std::cin>>first;
    Node* temp = new Node(first);
    root->left = createBinaryTree(temp, first);
    //right element
    std::cout<<"Enter right Element of "<<second<<" :";
    std::cin>>second;
    temp = new Node(second);
    root->right = createBinaryTree(temp, second);
    return root;
}
int main(){
    std::cout<<"Enter root value:";
    int n; std::cin>>n;
    Node* root = new Node(n);
    root = createBinaryTree(root, n);

}