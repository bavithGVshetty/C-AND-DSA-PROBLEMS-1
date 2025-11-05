// Unordered_map
// Stores key and value pairs
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> marks;

    marks["Anisha"]=90;
    marks["varun"]=100;
    marks["Jeev"]=35;
    
    cout<<"Anisha's marks: "<<marks["Anisha"]<<endl;
    // cout<<"All marks\n";


}