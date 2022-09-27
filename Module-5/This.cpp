#include<iostream>
using namespace std;
class Thisdemo
{
public:
    int no;
    int data(int no)
    {
        this->no=no;
        /*
        int no=100;
        cout<<"Value of no(local):"<<no<<endl;
        cout<<"Vlaue of no(data member):"<<this->no;
        */
        cout<<"Value of no(data member):"<<no;
        return 0;
    }
};
int main()
{
    Thisdemo t1;
    // t1.no=10;
    t1.data(45);
    return 0;
}