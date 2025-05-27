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
Node* insertBefore(Node* head, int num)
{
    Node* temp = new Node(num);
    if(!head)
    {
        return temp;
    }
    temp->next = head;
    head->prev = temp;
    return temp;
}
Node* insertAfter(Node* head, int num)
{
    Node* temp = new Node(num);
    if(!head)
    {
        return temp;
    }
    Node* temp2 = head;
    while(temp2->next)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
    temp->prev = temp2;
    return head;
}
void deleteNode(Node* &head, int x)
{
    Node* curr = head, *preveous = NULL;
    if(x == 1)
    {
        head = head->next;
        delete curr;
        return;
    }
    while(--x){
        preveous = curr;
        curr = curr->next;
    }
    preveous->next = curr->next;
    if(preveous->next) 
    {
        preveous->next->prev = preveous;
    }
    delete curr;
}
int main()
{
    vector<int>arr = {1,2,3};
    //insert before
    Node* head= new Node(arr[0]);
    for(int i=1;i<arr.size();i++){
        head = insertBefore(head, arr[i]);
    }
   printLinkedList(head);
   //insert after
   for(int i=0;i<arr.size();i++){
       head = insertAfter(head,arr[i]);
    }
    printLinkedList(head);

    //delete node 
    int num;
    cout<<"Enter which node to be deleted:";
    cin>>num;
    deleteNode(head, num);
    printLinkedList(head);
}