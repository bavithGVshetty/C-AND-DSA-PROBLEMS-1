// 2.List 
// Is a type of sequence container


#include<iostream>
#include<list>
#include<deque>
using namespace std;

int main(){
    deque<int> l={10,20,30};
    l.push_back(40);
    l.push_front(5);
    l.pop_back();
    for ( int i: l)
    {
        cout<<i<<" ";
    }
    return 0;
    
}