#include<iostream>
using namespace std;
int no=1;
int main()
{
    int no=10;
    cout<<"Value of local variable no is:"<<no<<endl;
    cout<<"value of global variable no is:"<<::no;
}