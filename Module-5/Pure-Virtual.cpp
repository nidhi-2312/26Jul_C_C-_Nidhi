#include<iostream>
using namespace std;
class Virtual
{
    public:
    virtual int data()=0;
};
class Derived : public Virtual
{
public:
    int data()
    {
        cout<<"This is pure virtual function.";
        return 0;
    }
};
int main()
{
    Derived d1;
    d1.data();
}