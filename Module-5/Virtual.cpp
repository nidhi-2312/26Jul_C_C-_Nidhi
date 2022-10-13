#include<iostream>
using namespace std;
class Virtual
{
    public:
    virtual int data(){
        cout<<"This is virtual function";
        return 0;
    }
};
int main()
{
    Virtual vr;
    vr.data();
}