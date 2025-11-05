// Constructor
// 1. The constructor is a member of the class;
// 2. The constructor is automatically called when an object is created.
// 3. The constructor will have Same name as class name.
// 4.Cannot be static,virtual,const.
// 5. Default constructor, parametirized and non parametirized ,copy constructor .
// 6. Is used for initilization of objects.
// 7. Used for Referencing.

#include <iostream>
using namespace std;
class Student{
    int age;
    string name;
    public: 
       Student (string n,int a){
        name=n;
        age=a;
       }

    // Creating the copy contructor
    Student(const Student &s){
        name=s.name;
        age=s.age;
        cout<<"Copy contructor is called\n";
    }
        void display(){
            cout<<"age: "<<age<<"Name"<<name<<endl;
        }
};
int main(){
    Student s1("Bavith",45);   
    Student s2=s1; 
}