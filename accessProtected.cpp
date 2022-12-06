#include<iostream>
using namespace std;

//size of empty class is 1 byte
class Base
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;

    public:
        Base()
        {
            i= 10;
            j= 20;
            k= 30;
        }
        
};
class Derived : public Base
{
    public:
    void fun()
        {
            cout<<"The value of public i: "<<i<<"\n";
            //cout<<"The value of private j: "<<j<<"\n";
            cout<<"The value of public k: "<<k<<"\n";
        }
};

int main()
{
    Derived dobj;

    dobj.fun();
    return 0;
} 