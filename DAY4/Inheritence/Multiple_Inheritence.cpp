#include <iostream>
using namespace std;
class Father
{
private:
    void fskills()
    {
        cout << "Expert Rider" << endl;
    }
};

class mother
{
public:
    void mskills()
    {
        cout << "Batminton player\n"
             << endl;
    }
};
class daughter : public Father, public mother
{
public:
    void swimming()
    {
        cout << "She is a swimmer" << endl;
    }
};
int main()
{
    daughter d;
    // d.fskills();
    d.mskills();
    d.swimming();
}