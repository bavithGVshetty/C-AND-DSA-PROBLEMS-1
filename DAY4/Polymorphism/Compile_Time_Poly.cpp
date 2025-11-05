// Polymorphism-Many forms

// It offers same functions or varibles or operators to behave
// differently depending on the context;

// 1.Function Overloading

#include <iostream>
using namespace std;

class Math
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    // Using return value
    double add(double a, double b)
    {
        return a + b;
    }
};
int main()
{
    Math m;
    cout << "Sum(int): " << m.add(3, 4) << endl;
    cout << "Sum(3 ints)" << m.add(9, 0, 1) << endl;
    cout << "Sum(Double)" << m.add(9.5, 0.5, 1.5) << endl;
}