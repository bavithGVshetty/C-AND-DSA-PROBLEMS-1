// Run time polymorphism
// key word called virtual

#include<iostream>

using namespace std;

class Animal{
    public:
        virtual void sound(){
            cout<<"Animal makes sound"<<endl;
        }
};

class Dog: public Animal{
    public:
        void sound() override{
            cout<<"Dog barks"<<endl;
        }
};

class Cat: public Animal{
    public:
    void sound() override{
        cout<<"Cat meows"<<endl;
    }
};
int main(){
    Animal *a;
    Dog d;
    Cat c;
    a=&d;
    
    a->sound();
a=&c;
a->sound();

}