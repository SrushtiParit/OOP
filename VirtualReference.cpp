#include<iostream>
using namespace std;

class Base
{
    public: 
        int A, B;
        void fun()                      //1000
        {
            cout<<"base fun \n";
        }
        virtual void gun()           //virtual = khota khota   //2000
        {
            cout<<"base gun \n";
        }
        virtual void sun()               //3000
        {
            cout<<"base sun \n";
        }
        virtual void run()              //4000
        {
            cout<<"Base run \n";
        }
};

class Derived: public Base
{
    public:
        int X,Y;
        
        void gun()                       //5000
        {
            cout<<"Derived gun\n";
        }
        virtual void run()              //6000
        {
            cout<<"Derived run\n";
        }
        virtual void mun()              //7000
        {
            cout<<"Derived mun\n";
        }
};

int main()
{
    //static memory allocation
    Derived dobj;     //upcasting
    Base &bref = dobj;
    
    //bref is a reference of type base refering to dobj which is object of derived class
    bref.fun();
    bref.gun();
    bref.sun();
    bref.run();

    return 0;
}