// Abstraction
// Abstraction means showing only the necessary details to user
// and hiding the internal implementation.
// abtract classes and using virtual function.
#include<iostream>
using namespace std;
#define PI 3.14
class Shape{
    public:
        virtual void draw()=0;
        virtual double area()=0;
};

class Circle: public Shape{
    private:
        double radius;
    public:
        Circle(double r){
            radius=r;
        }
        // Implementation of abstract functions
        void draw() override {
            cout<<"Drawing a circle"<<endl;
        }
        double area() override{
            return PI*radius*radius;
        }
};
class Rectangle: public Shape{
    private: 
        double length,width;
    public:
        Rectangle(double l,double w){
            length=l;
            width=w;
        }
        void draw() override{
            cout<<"Drawing a Rectangle"<<endl;
        }
        double area() override{
            return length*width;
        }
};

int main(){
    Shape* s1=new Circle(5.0);
    Shape* s2=new Rectangle(4.0,8.0);
    
    s1->draw();//circle
    s2->draw();//Rectangle
   cout<<"CIRCLE AREA"<<s1->area()<<endl;

}



