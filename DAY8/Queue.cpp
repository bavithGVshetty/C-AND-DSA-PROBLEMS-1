// QUEUE
// Linear Data structure
// Follows FIFO(First in First out) prinple.

// Pointers-
    // 1.Rear(back)
    // 2.front
// Operations
// 1.Enqueue
// 2.dequeue
// 3.front
// 4.rear
// 5.isEmpty
// 6.isFull
// Implementation of Queue
// 1.Arrays
// 2.Linked List

// Types of Queue
// 1.Simple queue-Using array and linked list
// 2.Circular Queue
// 3.Priority Queue
// 4.Deque


#include<iostream>
using namespace std;

#define SIZE 5

class Queue{
    int SimpleQueue[SIZE];
    int front,rear;

    public:
        Queue(){
            front=-1;
            rear=-1;
        }

    void enqueue(int value){
        if(rear==SIZE-1){
            cout<<"Queue Overflow\n";
            return;
        }
        if(front==-1){
            front=0;
        }
        SimpleQueue[++rear]=value;
        cout<<value<<": Inserted into Queue.\n";
    }

    void dequeue(){
        if(front==-1){
            cout<<"Queue underflow\n";
            return;
        }
        cout<<SimpleQueue[front]<<"Removed from Queue.\n";
        front++;
    }
    void display(){
         if(front==-1){
            cout<<"Queue underflow\n";
            return;
        }
        cout<<"Queue elements: ";
        for (int i = front; i <=rear ; i++)
        {
            cout<<SimpleQueue[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Queue q;
    cout<<"Enter the number of elements"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        q.enqueue(value);
    }
    q.display();
}