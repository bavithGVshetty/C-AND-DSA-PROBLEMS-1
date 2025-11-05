// MAP
// Stores the elements in key-value fashion.
// Key are unique
// values can be modified
// Stored in sorted order of keys
#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int ,string> mp;

    mp[64]="Keerthana";
    mp[65]="Keerthana";
    mp[66]="keerthi";
    mp[67]="Kushi";
    mp[409]="Bavith";
    
    cout<<"Map elements: \n";

    for(auto &p:mp){
        cout<<p.first<<"-->"<<p.second<<endl;
    }
    return 0;
    
}