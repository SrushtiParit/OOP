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
    //dynamic memory allocation
    Base *bp = new Derived;      //upcasting
      
      /*   or 
      Base *bp = NULL;
      bp = new Derived;   */

    //bp = (derived *) malloc (sizeof(Derived*size ))

    bp->fun();
    bp->gun();          //use of virtual 
    bp->sun();          //incomplete use of virtual 
    bp->run();          //use of virtual
    //bp->mun();          //error
    return 0;
}