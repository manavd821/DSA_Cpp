#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* createLinkedListAtStart(vector<int> arr,int idx,Node* prev){
    if(idx==arr.size()){
        return prev;
    }
    Node *temp=new Node(arr[idx]);
    temp->next=prev;
    return createLinkedListAtStart(arr,idx+1,temp);
}
Node* createLinkedListInsertAtEnd(vector<int> arr,int idx){
    if(idx==arr.size()){
        return NULL;
    }
    Node *temp=new Node(arr[idx]);
    temp->next=createLinkedListInsertAtEnd(arr,idx+1);
    return temp;
}
void printLinkedList(Node* head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    printLinkedList(head->next);
}
Node* insertAtPosition(Node* head,int x,int data){
    Node* tail=head;
    x--;
    while(x)
    {
        tail=tail->next;
        x--;
    }
    Node* temp=new Node(data);
    temp->next=tail->next;
    tail->next=temp;
    return head;
}
int main(){
    cout<<"Enter the size of the array: ";  
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //create linked list at end
    Node* head=createLinkedListInsertAtEnd(arr,0);
    printLinkedList(head);
    cout<<endl;
    //create linked list at start
    Node* head2=createLinkedListAtStart(arr,0,NULL);
    printLinkedList(head2);
    cout<<endl;
    head2=insertAtPosition(head2,3,100);
    printLinkedList(head2);
}
