// Class
// A blueprint that defines data members and member functions
// Class is also a datatype

// Class can have both
// 1.Variable (Data Members)
// 2.Methods (Member funtion)
// Class have multiple members like above

// Class is blueprint for creating objects
// Class defined by a keyword called "class"
// Class can have Member of type Private, public and protected.

// Implementation of class

#include <iostream>

using namespace std;

class Student
{
public:
     string name;
    int age;

    void display()
    {
        int value=10;
        cout << "Name:" << name << "Age:" << age << endl;
    }

    // value=20;
};
int main()
{
    Student s1;
    s1.name = "Bavith";
    s1.age = 45;

    s1.display();
    return 0;
}