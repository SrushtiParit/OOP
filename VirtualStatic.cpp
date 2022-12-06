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
    cout<<"size of base class: "<<sizeof(Base)<<"\n";
    cout<<"size of derived class: "<<sizeof(Derived)<<"\n";
    Base *bp = NULL;
    Derived dobj;
    bp = &dobj;       //upcasting
    
    bp->fun();
    bp->gun();          //jyacha pointer tyala chya kade jato 
    bp->sun();          //base cha pointer base kade jato 
    return 0;
}