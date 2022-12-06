#include<iostream>
using namespace std;

//call by value
void fun(int no)
{
    cout<<"Inside call by value "<<no<<"\n";
    no++;
}
//call by address
void gun(int *p)
{
    cout<<"Inside call by address "<<*p<<"\n";
    (*p)++;
}
//call by reference  //reference means nickname
void sun(int &ref)
{
    cout<<"Inside call by reference "<<ref<<"\n";
    ref++;
}


int main()
{
    int i = 10;
    int j = 20;
    int k = 30;

    fun(i);   
    cout<<i<<"\n";        //fun(10)
    gun(&j);          //gun(&200)
    cout<<j<<"\n";
    sun(k);           //sun(k)
    cout<<k<<"\n";

    return 0;
}