#include<iostream>
using namespace std;
class Class
{
public:
    int no;
    char nm[20];
    int define()
    {
        cout<<"Enter no:";
        cin>>no;
        cout<<"Enter name:";
        cin>>nm;
        return 0;
    }
    int show()
    {
        cout<<"\nNo is:"<<no;
        cout<<endl<<"Name is:"<<nm;
        return 1;
    }
};
int main()
{
    Class obj;
    obj.define();
    obj.show();
}