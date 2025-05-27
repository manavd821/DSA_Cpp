#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void printLinkedList(Node* head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    printLinkedList(head->next);
}
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    Node *head = NULL;
    Node *temp = head;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if(!head)
        {
            head=new Node(arr[i]);
        }
        else
        {
            temp=new Node(arr[i]);
            //traverse the tail at end or list
            Node *tail=head;
            while(tail->next)
            {
                tail=tail->next;
            }
            //now tail is at end
            //inserting temp at end
            tail->next=temp;
            tail=tail->next;
        }
    }
    //printing
    printLinkedList(head);
    cout<<endl;
    temp = head;
    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = head;
    //print linked list
    temp = head->next;
    cout<<head->data<<" ";
    while(temp !=head)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
