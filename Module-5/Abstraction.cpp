#include<iostream>
using namespace std;
class Capsul
{
private:
    int id;
    string nm;
    

	int data()
    {
        id=101;
        nm={"Heena"};
        
        return 0;
    }
public:
    int Print(int i, string n)
    {
        id=i;
        nm=n;
        cout<<"Your id is:"<<id;
        cout<<endl<<"Your name is:"<<nm;
        return 0;
    }
};
int main()
{
    Capsul cap;
// 	cap.data();
    cap.Print(101,"Hina");
}