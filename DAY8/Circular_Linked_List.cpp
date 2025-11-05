// Singly linked list 
// Doubly linked list
// circular linked list
// 1.Singly Circular Linked List
// 2.Doubly Circular linked List

// 1.Circular singly Linked list

#include<iostream>
using namespace std;

class Node{
    public: 
     int data;
    Node *next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};

class CircularLinkedList{
    public:
        Node *head;

        CircularLinkedList(){
            head=nullptr;
        }

        void insertAtEnd(int val){
            Node *newNode=new Node(val);

            if(head==nullptr){
                head=newNode;
                newNode->next=head;
                return;
            }
            Node *temp=head;
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=newNode;
            newNode->next=head;
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

int main(){
    CircularLinkedList cll;
    cll.insertAtEnd(10);
    cll.insertAtEnd(20);
    cll.insertAtEnd(30);
    cll.display();
}

