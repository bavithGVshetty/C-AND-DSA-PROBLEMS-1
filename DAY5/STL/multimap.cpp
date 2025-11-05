#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<int ,string> multimp;
    multimp.insert({1,"Apple"});
    multimp.insert({2,"Banana"});
    multimp.insert({3,"Carrot"});
    multimp.insert({1,"Beans"});
    cout<<"Map elements: \n";
    for(auto &p:multimp){
        cout<<p.first<<"-->"<<p.second<<endl;
    }
    return 0;
    
}