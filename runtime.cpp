#include<iostream>
using namespace std;

class Base
{
    public:              // Access Specifier
        int A, B;

        void fun()         //function definition                       1000
        {
            cout<<"Base fun\n";
        }
        void gun(int i)     //function definition                      2000 
        {
            cout<<"Base gun with one integer\n";
        }
        void gun (int i, int j)   //overloaded function definition     3000
        {
            cout<<"Base gun with two integer\n";
        }
};
class Derived: public Base
{
    public:
        int X, Y;
        void sun()    //function definition                            4000
        {
            cout<<"Derived Sun\n";
        }
        void fun(int i)       //function redefinition                       5000
        {
            cout<<"Derived fun\n";
        }
        
};

int main()
{
    Derived dobj;
    dobj.Base::fun();      //call 1000  (explicitly calling using base)
    dobj.fun(21);           //call 5000
    dobj.gun(11);         //call 2000
    dobj.gun(11, 12);     //call 3000
    dobj.sun();           //call 4000
    
    return 0;
}