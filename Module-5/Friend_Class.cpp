#include<iostream>
using namespace std;
class Friend
{
    int no;
public:
    friend class Class;
};
class Class
{
    public:
    int data(Friend &f)
    {
        cout<<"Enter value of no:";
        cin>>f.no;
        cout<<"\nVlaue of no is:"<<f.no;
        return 0;
    }
};
int main()
{
    Friend fd;
    Class cl;
    cl.data(fd);
    return 0;
}