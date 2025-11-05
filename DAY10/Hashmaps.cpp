// HASHMAP
// It is a key value data structure that allows.
//Fast insertion
// Fast lookup 
// Fast deletion
#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<string,int> prices;

    prices["Apple"]=100;
    prices["banana"]=100;

    // BEGIN() and END()
    cout<<"Price of Apple"<<prices["Apple"]<<endl;

    


}