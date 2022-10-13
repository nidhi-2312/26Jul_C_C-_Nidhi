#include<iostream>
using namespace std;
class Get
{
public:
    int a,b;
    void getdata()
    {
        cout<<"Enter no1:";
        cin>>a;
        cout<<"Enter no2:";
        cin>>b;
    }
};
class Add : public Get
{
public:
    void addition()
    {
        cout<<"\nAddition is:"<<a+b;
    }
};
class Mul : public Get
{
public:
    void multiplication()
    {
        cout<<endl<<"Multiplication is:"<<a*b;
    }
};
int main()
{
    Add a;
    Mul m;
    int ch;
    cout<<"-------------Menu------------";
    cout<<"1.Additon\n2.Multiplicaion\n";
    cout<<"Enter your choice:";
    cin>>ch;
    switch(ch)
    {
        case 1:
            a.getdata();
            a.addition();
            break;
        case 2:
            m.getdata();
            m.multiplication();
            break;
        default:
            cout<<"Enter vaild choice.......";
            break;
    }
}