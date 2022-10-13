#include<iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout<<"This is base constructer in base class"<<endl;
    };
};
class Derived : public Base
{
public:
    Derived() : Base()
    {
        cout<<"This is base constructer in derived class";
    }
};
int main()
{
    Derived d1;

}