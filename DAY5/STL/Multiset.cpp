// MultiSet allows duplicates
#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> s;
    s.insert(20);
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

