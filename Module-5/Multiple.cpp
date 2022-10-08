#include<iostream>
using namespace std;
class Parn
{
public:
    int pid;
    float pper;
    void pgetdata()
    {
        cout<<"Parn:-\n";
        cout<<"Enter your id:";
        cin>>pid;
        cout<<"Enter your percentage:";
        cin>>pper;
    }
};
class Arpit
{
public:
int aid;
float aper;
    void agetdata()
    {
        cout<<"Arpit:-\n";
        cout<<"Enter your id:";
        cin>>aid;
        cout<<"Enter percentage:";
        cin>>aper;
    }
};
class Jenny
{
public:
int jid;
float jper;
    void jgetdata()
    {
        cout<<"Jenny:-\n";
        cout<<"Enter your id:";
        cin>>jid;
        cout<<"Enter your percentage:";
        cin>>jper;
    }
};  
class Tops : public Parn, public Arpit, public Jenny
{
public:
    void showdata()
    {
        cout<<"\n------Parn Data------";
        cout<<"\n\tId is:"<<pid;
        cout<<"\n\tPercentage is:"<<pper;
        cout<<"\n\n------Arpit Data-----";
        cout<<"\n\tId is:"<<aid;
        cout<<"\n\tPercentage is:"<<aper;
        cout<<"\n\n-----Jenny Data-----";
        cout<<"\n\tId is:"<<jid;
        cout<<"\n\tPercentage is:"<<jper;
    }
};
int main()
{
    Tops t1;
    t1.pgetdata();
    t1.agetdata();
    t1.jgetdata();
    t1.showdata();
}