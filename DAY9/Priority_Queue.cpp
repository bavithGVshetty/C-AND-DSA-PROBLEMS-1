// Priority Queue
// A priority Queue(PQ) is an abstract data type where each element has priority,
// The element removed next is the one with the highest or lowest priority.
// 1.Max Priority queue(Max heap);
// 2.Min Priority Queue(min heap)

// OPERATION AVAILABLE
// 1.PUSH/INSERT->adding an element
// 2.top/Peek->It is the highest-priority element.
// 3.pop/Extract->Remove highest priority element
// 4.ChangePriority


// Implementation using STL
#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq; //Max pririoty queue
    pq.push(10);
    pq.push(5);
    pq.push(20);
    cout<<"Top element "<<pq.top()<<endl;
    
    cout<<"Remaining elements: "<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }




}