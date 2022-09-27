#include<iostream>
using namespace std;
class Friend
{
    int no;
public:
    // int no;
    int showdata()
    {
        // cout<<"\nValue of no is:"<<no;//Not getting value due to local value
        return 0;
    }
    friend int getdata(int no2, Friend);
};
int getdata(int no2, Friend fd)
{
    cout<<"Enter no:";
    cin>>fd.no;
    cout<<"\nValue of no is:"<<fd.no+no2;
    return 0;
}
int main()
{   
    Friend f1;
    getdata(23, f1);
    f1.showdata();
}