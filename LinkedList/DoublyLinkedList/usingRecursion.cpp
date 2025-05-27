#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data;
    Node* next,*prev;
    Node() : data(0), next(NULL), prev(NULL){};
    Node(int data) : data(data), next(NULL), prev(NULL){};
    Node(int data, Node *next) : data(data), next(next), prev(NULL){};
    Node(int data, Node *next, Node *prev) : data(data), next(next), prev(prev){};
};
void printLinkedList(Node* head)
{
    Node *temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
   cout<<endl;
}
Node* insertAfter(Node* &curr, Node* prev, vector<int>&arr, int idx)
{
    if(idx == arr.size())
    {
        return NULL;
    }

    curr = new Node(arr[idx],NULL,prev);
    // prev = curr;
    curr->next = insertAfter(curr->next, curr, arr, idx+1);
    return curr;
}
int main()
{
    vector<int>arr = {1,2,3,4,5};
    // Node* prev = NULL;
    Node *head=insertAfter(head, NULL, arr, 0);
    printLinkedList(head);

}