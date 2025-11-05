// Destructors

// Is a speacial Member function in CPP


#include<iostream>

using namespace std;

class Demo{
    public:
    Demo(){
        cout<<"Constructor Object created"<<endl;
    }
    // Destructor
    ~Demo(){
        cout<<"Destructor: Object Destroyed"<<endl;
    }
};

int main(){
    cout<<"Entering main()"<<endl;
    Demo obj;
    cout<<"Exiting main()"<<endl;
    return 0;
}