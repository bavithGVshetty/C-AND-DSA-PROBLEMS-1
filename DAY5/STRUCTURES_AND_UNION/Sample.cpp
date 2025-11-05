// Structures 
// Structure is user defined data type
// Structure also has members
// It has both data member and function member
// Now structure is similar to class 
// use the struct
// members are public by default


#include<iostream>
using namespace std;

struct Employee
{
    string name;
    int id;
    Employee(string n,int i){
        name=n;
        id=i;
    }
    void show(){
        cout<<"Name: "<<name<<", ID "<<id<<endl;
    }
};
int main(){
    Employee e1("Bavith",011);
    e1.show();
}

