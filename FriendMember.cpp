#include<iostream>
using namespace std;

class hello 
{
    public:
        void fun();            //function declaration 
};

class demo 
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }
    friend void hello::fun();   //
};


void hello:: fun()              //function definition 
        {
            demo obj;
            cout<<"value of i: "<<obj.i<<"\n";
            cout<<"value of j: "<<obj.j<<"\n";
            cout<<"value of k: "<<obj.k<<"\n";
        }


int main ()
{
    hello hobj;
    hobj.fun();
    return 0; 
}