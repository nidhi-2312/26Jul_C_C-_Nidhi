#include<iostream>
using namespace std;
int fecto(int no)
{
    if (no <= 1)
        return 1;
    return no*fecto(no-1);
}
int main()
{
    int no;
    cout<<"Enter no that you want fecto:";
    cin>>no;
    cout<<"Fectorial of "<<no<<" is:"<<fecto(no);
}