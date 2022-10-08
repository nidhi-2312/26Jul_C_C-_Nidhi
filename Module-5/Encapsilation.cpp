#include<iostream>
using namespace std;
class Capsul
{
private:
    int id;
    string nm;
    
public:
	int data()
    {
        id=101;
        nm={"Heena"};
        
        return 0;
    }

    int Print()
    {
        cout<<"Your id is:"<<id;
        cout<<endl<<"Your name is:"<<nm;
        return 0;
    }
};
int main()
{
    Capsul cap;
	cap.data();
    cap.Print();
}
