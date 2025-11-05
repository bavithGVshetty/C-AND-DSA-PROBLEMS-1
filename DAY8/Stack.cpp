#include<iostream>
// Stack
// Stack
// A stack is Linear data structure that follows
// LIFO(Last in First Out)

// Operations in stack
// 1.Push
// 2.Pop
// 3.Peek()
// 4.isEmpty
// 5.size()

// Implementation of stack
// 1.Using Arrays.
// 2.Using Linked List.

// Stack Using Arrays
#include<iostream>
using namespace std;
#define MAX 5

class Stack{
    int arr[MAX];
    int top;

    public:
        Stack(){
            top=-1;
        }
    void push(int x){
        if(top==MAX-1){
            cout<<"Stack Overflow!\n";
        }
        else{
            arr[++top]=x;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow:\n";
        }
        else{
            top--;
        }
    }
    int peek(){
        if(top==-1){
            return -1;
        }
        return arr[top];
    }

    void display(){
        if(top==-1){
            cout<<"Stack is empty:\n";
        }
        else{
            cout<<"Stack elements: ";
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.display();
    cout<<"After pop operation\n";
   
    cout<<"The peek Element: "<<s.peek()<<endl;
     s.pop();
    s.display();
    return 0;
}