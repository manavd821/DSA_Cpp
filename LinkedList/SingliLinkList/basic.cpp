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
    // inserting the node at beginning
    //  if(head==NULL){
    //      head=new Node(5);
    //  }
    //  else{
    //      Node *temp=new Node(5);
    //      temp->next=head;
    //      head=temp;
    //  }
    // inserting array at beginning
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (!head)
    //     {
    //         head = new Node(arr[i]);
    //     }
    //     else
    //     {
    //         Node *temp = new Node(arr[i]);
    //         temp->next = head;
    //         head = temp;
    //     }
    // }
    Node *temp = head;
    // //printing linked list
    // while (temp)
    // {
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    // cout<<endl;
    //inserting at end
    // temp=new Node(0);
    // Node *tail=head;
    // while(tail->next)
    // {
    //     tail=tail->next;
    // }
    // tail->next=temp;
    // tail=tail->next;
    // //printing node
    // temp = head;
    // printLinkedList(head);
    // cout<<endl;
    //inserting array at end
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
    
}
