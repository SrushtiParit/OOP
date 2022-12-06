#include<iostream>
using namespace std;

class Base1
{
    public:
        int A;    //4

        Base1()
        {
            cout<<"Base1 constructor\n";
        }
        ~Base1()
        {
            cout<<"Base1 Destructor\n";
        }
        void gun()
        {
            cout<<"Base1 gun\n";
        }
};
class Base2
{
    public:
        int I, J, K;    //12

        Base2()
        {
            cout<<"Base2 constructor\n";
        }
        ~Base2()
        {
            cout<<"Base2 Destructor\n";
        }
        void fun()
        {
            cout<<"Base2 fun\n";
        }
};
class derived: public Base1, public Base2
{
    public:
        int X, Y;     //24
        derived()
        {
            cout<<"derived constructor\n";
        }
        ~derived()
        {
            cout<<"derived Destructor\n";
        }
        void sun()
        {
            cout<<"derived sun\n";
        }
        
};
int main()
{
    derived dobj;
    dobj.fun();
    dobj.gun();
    dobj.sun();
    return 0;
}