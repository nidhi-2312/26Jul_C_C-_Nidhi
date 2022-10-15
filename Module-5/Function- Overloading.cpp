#include<iostream>
using namespace std;
class Polymor
{
public:
    int div(int a, int b)
    {
        return a/b;
    }
    int div(int a, int b, int c)
    {
        return (a/b)*(b/c);
    }
};
int main()
{
    Polymor pl;
    cout<<pl.div(15,5);
    cout<<endl<<pl.div(45,5,1);
}