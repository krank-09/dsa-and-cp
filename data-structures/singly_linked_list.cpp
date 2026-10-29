// Singly linked list class: insert at the end and display.

// class of linked list
#include <iostream>
using namespace std;
class Node{
    public:
    int data;   
    Node* next;
};
class LinkedList{
    Node* head;
    public:
    LinkedList(){head=NULL;}    
    void insert(int value);
    void display();
};
void LinkedList::insert(int value){
    Node* newNode=new Node();
    newNode->data=value;    
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL){    
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void LinkedList::display(){
    Node* temp=head;
    if(head==NULL){
        cout<<"List is empty\n";
        return; 
    }
    cout<<"Elements in the list are: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";     
}
int main(){
    LinkedList list;
    int n, value;
    cout<<"Enter number of elements to be inserted: ";      
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>value;
        list.insert(value);
    }
    list.display();     
}