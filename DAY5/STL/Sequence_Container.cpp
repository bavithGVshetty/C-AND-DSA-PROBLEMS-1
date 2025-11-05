//1.vectors
// A vector is a sequence container
// A vector is similar to array but it dynamic.
// It can Resize dynamically

// Program Example
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={1,2,3};
    v.push_back(4);
    
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;

}