#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};
class Stack{
    Node *top;
    public:
        Stack(){
            top=nullptr;
        }
    void push(int x){
        Node *newNode=new Node();
        newNode->data=x;
        newNode->next=top;
        top=newNode;
    }
    void pop(){
        if(top==nullptr){
            cout<<"Stack underflow\n";
        }
        else{
            Node *temp=top;
        
        top=top->next;
        delete temp;
    }}
    void display(){
        if(top==nullptr){
            cout<<"Stack is empty: ";
        }
        else{
            cout<<"Stack Elements: ";
            Node *temp=top;
            while(temp!=nullptr){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();
    s.pop();
    s.display();
}