#include<iostream>
using namespace std;

class vehicle{
    public:
    int data=10;
    void move(){
        cout<<"This is Vehicle Moving."<<endl;
    }
};


class Bicycle:public vehicle{
    public:
    void bell(){
        cout<<"Ding Ding Ding";
    }
};



int main(){
    Bicycle b;
    vehicle v;
    b.data;
    b.move();
    b.bell();

}
