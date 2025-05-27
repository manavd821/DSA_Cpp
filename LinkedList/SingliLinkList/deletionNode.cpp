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
void deleteFirstNode(Node* &head)
{
    if(head)
    {
        Node *temp=head;
        head=head->next;
        delete temp;
    }
}
void deleteLastNode(Node* &head)
{
    if(!head)
    {
        cout<<"linked list not exist";
    }
    if(head->next==NULL)//ek j node hoy toh
    {
        delete head;
        head=NULL;
    }
    else
    {
        Node *curr=head;
        Node *prev=NULL;
        while(curr->next)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        delete curr;
    }
}
void deleteAnyMiddleNode(Node* &head,int x)//it will work for delete first and last node too
{
    if(x==1)
    {
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    else
    {
        Node*temp=head,*prev=NULL;
        x--;
        while(x)
        {
            prev=temp;
            temp=temp->next;
            x--;
        }
        prev->next=temp->next;
        delete temp;
    }
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
    //deleting first node
    // deleteFirstNode(head);
    // //print
    // printLinkedList(head);
    // cout<<endl;
    // //delete last Node
    // deleteLastNode(head);
    // //print
    // printLinkedList(head);
    // cout<<endl;
    //delete any Node
    cout<<"Enter Node number that you want to be deleted:";
    int n;
    cin>>n;
    deleteAnyMiddleNode(head,n);
    printLinkedList(head);
}
