#include<iostream>
using namespace std;
class Argument
{
public:
    int a;
    int b;
    int data()
    {
        cout<<"\nEnter avlue of a & b:";
        cin>>a>>b;
        cout<<"\nValue of a is:"<<a<<endl<<"Value of b is:"<<b;
        return 0;
    }
    int add(Argument, Argument);
};
int Argument :: add(Argument a1, Argument a2)
{
    cout<<"\nAddition of 1st value is:"<<a1.a+a2.a;
    cout<<"\nAddition od 2nd value is:"<<a1.b+a2.b;
    return 0;
}
int main(int argc, char const *argv[])
{
    Argument obj1,obj2,obj3;
    obj1.data();
    obj2.data();
    obj3.add(obj1,obj2);

    return 0;
}