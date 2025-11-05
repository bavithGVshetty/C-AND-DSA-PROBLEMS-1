#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node *next;
    Node *prev;
    Node(int val){
        data=val;
        next=nullptr;
        prev=nullptr;
    }
};

class CircularDoublyLinkedList{
    public:
        Node *head;

        CircularDoublyLinkedList(){
            head=nullptr;
        }

        void insertAtEnd(int val){
            Node *newNode=new Node(val);

            if(head==nullptr){
                head=newNode;
                head->next=head;
                head->prev=head;
                return;
            }
            Node *tail=head->prev;
            tail->next=newNode;
            newNode->prev=tail;
            newNode->next=head;
            head->prev=newNode;
        }
        void display(){
            if(head==nullptr){
                cout<<"Circular List: ";
                return;
            }
            Node *temp=head;
            cout<<"Circular List: ";
            do{
                cout<<temp->data<<" ";
                temp=temp->next;
                }while(temp!=head);
                cout<<endl;
        }
};
