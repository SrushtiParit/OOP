#include<iostream>
using namespace std;

class Base
{
    //  int x (if access apecifier is not given than by default it is private)
    //default access specifier for function is also private
    
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
        void fun()
        {
            cout<<"The value of public i: "<<i<<"\n";
            cout<<"The value of private j: "<<j<<"\n";
            cout<<"The value of public k: "<<k<<"\n";
        }
};


int main()
{
    Base bobj;
    cout<<"The value of public i: "<<bobj.i<<"\n";
   // cout<<"The value of private j: "<<bobj.j<<"\n";
   // cout<<"The value of public k: "<<bobj.k<<"\n";

    bobj.fun();
    bobj.Gun();
    return 0;
} 