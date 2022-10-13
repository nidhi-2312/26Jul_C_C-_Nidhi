#include<iostream>
using namespace std;
class Plymorphism
{
public:
    float div(float a, float b)
    {
        return a/b;
    }
};
class Poly
{
public:
    float div(float a, float b)
    {
        return a/b;
    }
};
int main()
{
    Plymorphism p1;
    Poly p2;
    cout<<p1.div(45,6);
    cout<<endl<<p2.div(89,5);
}