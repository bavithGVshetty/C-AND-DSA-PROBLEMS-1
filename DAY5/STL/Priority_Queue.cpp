// Priority Queue
// Elements are automatically sorted by priority
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(30);
    pq.push(10);
    pq.push(20);
    cout<<pq.top()<<endl;
}