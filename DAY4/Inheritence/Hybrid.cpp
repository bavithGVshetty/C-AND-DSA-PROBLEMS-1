#include <iostream>
using namespace std;
class Vehicle
{
public:
    void move()
    {
        cout << "Vehicle moves" << endl;
    }
};

class Car : public Vehicle
{
public:
    void ABC()
    {
        cout << "Accelarator, brake, clutch" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void wheelie()
    {
        cout << "Bike doing Wheelie" << endl;
    }
};

int main(){
    Bike b;
    b.move();
    b.wheelie();
    Car c;
    c.ABC();
    
}