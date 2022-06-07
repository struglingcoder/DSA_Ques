#include<iostream>
#include<vector>
#include<map>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void InsertAtTail(int val, node* &head){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        head->next=NULL;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=NULL;
    return;
}

void InsertAtHead(int val, node* &head){
    node* n = new node(val);
    node* temp = head;
    head=n;
    n->next=temp;
}

void display(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}

int main()
{
    node* head=NULL;
    cout<<"Enter the value of n";
    cout<<endl;
    InsertAtTail(1,head);
    InsertAtTail(2,head);
    InsertAtTail(3,head);
    InsertAtHead(4,head);
    display(head);
    return 0;
}
