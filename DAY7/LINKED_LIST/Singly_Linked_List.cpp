#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class LinkedList{
    public:
        Node *head;

    LinkedList (){
        head=nullptr;
    }

    void insertAtBegining(int value){
        Node *newNode=new Node();
        newNode->data=value;
        newNode->next=head;
        head=newNode;
    }

    void insertAtEnd(int value){
        Node* newNode=new Node();
        newNode->data=value;
        newNode->next=nullptr;
        
        if(head==nullptr){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void display(){
        Node *temp=head;
        cout<<"Linked List: ";
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";

    }
    
};

int main(){
LinkedList list;
list.insertAtBegining(1);
list.insertAtBegining(2);
list.insertAtBegining(3);
list.insertAtBegining(4);
list.display();
}