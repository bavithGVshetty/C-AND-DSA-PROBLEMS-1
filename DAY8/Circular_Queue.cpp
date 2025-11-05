// Circular Queue
// Last position connects to the first to form circle
// It solves wastage problem of the simple queue
#include <iostream>
#define SIZE 5
using namespace std;

class CircularQueue
{
    int CQ[SIZE];
    int front, rear;

public:
    CircularQueue()
    {
        front = -1;
        rear = -1;
    }
    bool isFull()
    {
        return ((rear + 1) % SIZE == front);
    }
    bool isEmpty()
    {
        return (front == -1);
    }

    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is Overflow";
            return;
        }
        if(isEmpty()){
            front=0;
        }
        rear=(rear+1)%SIZE;
        CQ[rear]=val;
        cout<<val<<"Inserted\n";
    }
};