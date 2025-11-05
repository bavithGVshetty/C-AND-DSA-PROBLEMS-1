// Union 
// Union is a user defined data type like structure and class 
// But used for not OOPs but for Procedural oriented programming
// Very lightweight than struct.
// memory-constrained systems->Drivers, Embedded systems, Operating systems
// IOT lightweight devices;
#include<iostream>
using namespace std;
union Data
{
int intVal;
float floatVal;
char charVal;
};

int main()
{
    Data d;
    d.intVal=10;
    d.floatVal=10.5;
    d.charVal='B';
    cout<<"intVal: "<<d.intVal<<endl;
}
