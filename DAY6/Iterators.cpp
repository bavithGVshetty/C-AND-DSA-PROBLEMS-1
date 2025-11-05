// Iterators
// call it as pointers for STL containers

// 1.Begin() and 2.end()
#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> v={10,20,30};

    for(vector<int>::iterator it =v.begin(); it!=v.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;

}
