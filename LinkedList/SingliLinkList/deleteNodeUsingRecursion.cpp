#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void printLinkedList(Node* &head){
    if(!head)
    {
        cout<<"linked list not exist"<<endl;
    }
    Node *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* deleteNode(Node* curr,int x)
{
    if(x==1)
    {
        Node* temp=curr->next;
        delete curr;
        return temp;
    }
    curr->next=deleteNode(curr->next,x-1);
    return curr;
}
int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    Node* head=NULL;
    for(int i=0;i<arr.size();i++)
    {
        if(!head)
        {
            head=new Node(arr[i]);
        }
        else
        {
            Node* temp=new Node(arr[i]);
            temp->next=head;
            head=temp;
        }
    }
    //printing list
    printLinkedList(head);
    cout<<endl;
    //delete any node
    cout<<"Enter node number you want to be deleted:";
    int n;cin>>n;
    head=deleteNode(head,n);
    printLinkedList(head);
}
