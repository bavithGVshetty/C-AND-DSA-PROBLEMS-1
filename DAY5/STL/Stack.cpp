#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.empty()<<endl;
    cout<<s.top()<<endl;

}