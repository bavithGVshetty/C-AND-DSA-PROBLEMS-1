// Unordered containers
// it is a container in STL stores elements in hash table;
// Hash table means a data structures
// There is no order to be maintained.
#include<unordered_set>
#include<iostream>
using namespace std;
int main(){
unordered_set<int> s={10,1,20,10,20,30};

cout<<"Elements in unordered set";

for(int i:s){
    cout<<i<<" ";
}
cout<<endl;

}