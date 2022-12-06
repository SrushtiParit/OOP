#include<iostream>
using namespace std;

void Maximum(int No1, int No2)
{
    if (No1>No2)
    {
        cout<<No1<<" is bigger number than "<<No2;
    }
    else if (No1<No2)
    {
        cout<<No2<<" is bigger number than "<<No1;
    }
    else
    {
        cout<<"Both the given numbers are equal";
    }
    
    
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter the first number\n";
    cin>>iValue1;
    cout<<"Enter the second number\n";
    cin>>iValue2;

    Maximum(iValue1, iValue2);
    return 0;
}