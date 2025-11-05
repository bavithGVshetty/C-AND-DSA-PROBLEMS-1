#include<iostream>
using namespace std;
class grandfather{
    public:
    void skills(){
        cout<<"Motivational Stories";
    }
};
class father:public grandfather{
    public:
    void skills(){
        cout<<"Gruha mantri";
    }
};

class child: public father{
    public: 
    void eat(){
        cout<<"Eating, Sleeping, Scrolling and Repeating";
    }

};

int main(){
    child c;
    c.eat();
    c.skills();

}