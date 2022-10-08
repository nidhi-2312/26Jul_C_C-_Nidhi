#include<iostream>
using namespace std;
class A
{
public:
    int house;
    void agetdata()
    {
        cout<<"Enter no of house:";
        cin>>house;
    }
};
class B : public A
{
public:
    int bal;
    void bgetdata()
    {
        cout<<"Enter total bank balance:";
        cin>>bal;
    }
};
class C : public B
{
public:
    void printdata()
    {
        cout<<"\nNo of house is:"<<house;
        cout<<"\nTotal bank balance is:"<<bal;
    }
};
int main()
{
    C obj;
    obj.agetdata();
    obj.bgetdata();
    obj.printdata();
}