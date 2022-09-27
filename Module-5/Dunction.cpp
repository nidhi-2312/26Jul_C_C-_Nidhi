#include<iostream>
using namespace std;
int a[10];
int i;
int b[10];
int getdata()
{
    for(i = 0; i < 10; i++)
    {
        cout<<"Enter 2 value:";
        cin>>a[i];
        cin>>b[i];
    }
    return 0;
}
int printdata()
{
    for(i = 0; i < 10; i++)
    {
        cout<<"Value a["<<i<<"] is:"<<a[i]<<"\t b["<<i<<"] is:"<<b[i]<<endl;
    }
    return 0;    
}
int main()
{
    getdata();
    printdata();
}