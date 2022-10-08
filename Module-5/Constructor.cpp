#include <iostream>
using namespace std;
class Construct
{
private:
    
public:
string nm;
   
    Construct()
    {
        
        cout<<"Enter your name:";
        cin>>nm;
    }
    int showdata()
    {
        cout<<"\nYour name is: "<<nm;
        return 0;
    }

   Construct(int no)
   {
        cout<<" Your lucky no is:"<<no;
        // return 0;
   }   
};

int main(int argc, char const *argv[])
{
    Construct con2;
    con2.showdata();
    Construct con(67);
    
    
    return 0;
}
