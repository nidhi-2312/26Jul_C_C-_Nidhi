#include<iostream>
using namespace std;
class Inline
{
public:
    inline int value(int no)
    {
        return no;
    }
};
int main()
{
    Inline in;
    cout<<"The value of value function is:"<<in.value(90);
}