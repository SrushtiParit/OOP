#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        Base()
        {
            cout<<"Inside Base constructor\n";
        }
        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }
        void fun()
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base  //class Derived extends Base (syntax of java)
{
    public:
        int X,Y;

        Derived()
        {
            cout<<"Inside derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside derived destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Gun of derived \n";
        }
};

int main()
{
    //Derived obj;    // static object created
    Derived * ptr = NULL;    //auto storage class
    ptr = new Derived;  //dynamically object created

    ptr-> fun();
    ptr-> Gun();

    delete ptr;
    return 0;
}