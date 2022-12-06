#include<iostream>                                                                                                                                 
using namespace std;

class Base
{
    public:
        int i;
        static int k;
        
};
int Base :: k = 11;
class Derived: public Base
{
    public:
        int x, y;
        Derived()
        {
            x = 50;
            y= 60;
        }
};
int main()
{
    Base bobj ;
    Derived dobj;

    //cout<< bobj.x;
    cout<< bobj.k<<"\n";
    cout<< sizeof(bobj)<<"\n";
    cout<<sizeof(dobj);

    return 0;
}