#include<iostream>
using namespace std;
class Poly
{
public:
    int no;
    void getdata()
    {
        cout<<"Enter value of no:";
        cin>>no;
    }
    //Binary Operator overloding 
    Poly operator - (Poly obj) // '-' Operator overloded
    {
        Poly obj1; // refrence of the object , to strore value
        obj1.no= no - obj.no; // no vlaue of object no1
        // obj.no is value of object no2
        return obj1;
    }
    void showdata()
    {
        cout<<"\nvalue of no is:"<<no;
    }
};
int main()
{
    Poly p1;
    cout<<"Eneter value:\n";
    p1.getdata();
    Poly p2;
    p2.getdata();
    cout<<"\nEntered value:\n";
    p1.showdata();
    p2.showdata();
    cout<<"\nResult:";
    Poly p3 = p1 - p2;
    p3.showdata();
    return 0;
}
