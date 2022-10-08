#include <iostream>
using namespace std;
class Base
{
public:
    int a; int b;
    int data()
    {
        cout<<"Enter value of 2 no:";
        cin>>a>>b;
        return 0;
    }
};
class Derived : public Base
{
public:
    float div()
    {
        cout<<"Devision of 2 no that you entered is:"<<(float)a/(float)b;
        return 1.0
        +-96;
    }
};
int main(int argc, char const *argv[])
{
    Derived dev;
    dev.data();
    dev.div();
    return 0;
}
