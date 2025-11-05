// Whch stores elements in a way that they are
// Automatically sorted default in ascending order using keys.

// 1.Set: Stores unique elements in sorted order
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(100);

    cout<<"Set elements: ";
    for(int i:s){        
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;

}

