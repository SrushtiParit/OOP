#include<iostream>
using namespace std;

class Maths 
{
    public:               //access specifier
        int iNo1;         //characteristic
        int iNo2;         //characteristic

    Maths()                  //default constructor
    {
        cout<<"Inside default constructor\n";
        iNo1 =0;
        iNo2 =0;
    }
    Maths(int A, int B)         //parameterized constructor
    {
        cout<<"Inside parameterised constructor\n";
        iNo1 = A;
        iNo2 = B;
    }
    ~Maths()
    {
         cout<<"Inside destructor\n";
        //destructor 
    }
    int addition()           //behaviour
    {
        return iNo1 + iNo2;
    }
    int substraction()         ////behaviour
    {
        //int subatraction(mathts *this) (here this is the pointer)
        return iNo1 - iNo2;
    }

};

int main()
{
     cout<<"Inside main function\n";
    Maths mobj1;
    Maths mobj2(11,10);
    int ret = 0;

    ret = mobj2.addition(); //ret = addition(&mobj1)
    //or ret = addition(200[it is the base address of mobj2])
    cout<<"Addition:"<<ret<<"\n";

    ret = mobj1.addition();
    cout<<"Addition: "<<ret<<"\n";

    ret = mobj2.substraction();
    cout<<"Sub: "<<ret<<"\n";

//ret is the bag in which we brought veggies
// and we took the same bag that is ret to bring fruits 

    return 0;
}