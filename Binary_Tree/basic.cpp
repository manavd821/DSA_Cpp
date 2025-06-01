#include<iostream>
#include<vector>
#include<queue>
class Node{
    public:
    int val;
    Node *left, *right;
    Node():val(0),left(NULL),right(NULL){};
    Node(int val):val(val),left(NULL),right(NULL){};
};
int main(){
    int x;
    std::cout<<"Enter root: ";
    std::cin>>x;
    Node *root = new Node(x);
    std::queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        int first,second;
        std::cout<<"Enter left child:";
        std::cin>>first;
        if(first != -1){
            temp->left = new Node(first);
            // std::cout<<first<<" is pushed left side!\n";
            q.push(temp->left);
        }
        std::cout<<"Enter right child:";
        std::cin>>second;
        if(first != -1){
            temp->right = new Node(second);
            // std::cout<<second<<" is pushed right side!\n";
            q.push(temp->right);
        }
    }
    
}