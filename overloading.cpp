#include<iostream>
using namespace std;

class overloading
{
    public:
        //Add@2ii         //name mangling 
        int Add(int a, int b)
        {
            cout<<"Addition of integers\n";
            return = a+b;
        }
        //Add@2ff
        float Add(float a, float b)
        {
            cout<<"Addition of float\n";
            return a+b;
        }
        //Add@2dd
        double Add(double a, double b)
        {
            cout<<"Addition of double\n";
            return a+b;
        }
        //Add@3iii
        int Add(int a, int b, int c)
        {
            cout<<"Addition of 3 integers\n";
            return a+b+c;
        }
        void Fun(int a, float b)
        {
            cout<<"Addition of integer and float\n";
        }
        void Fun(float a, int b)
        {
            cout<<"Addition of float and integer\n";
        }
};

int main()
{
    overloading obj;
    int i;
    float f;
    double d;

    i= obj.Add(11, 21);
    cout<<i<<"\n";
    i = obj.Add(11, 21, 51);
    cout<<i<<"\n";
    d = obj.Add(10.9, 21.9);
    cout<<lf<<"\n";
    f = obj.Add(10.9f, 21.9f);
    cout<< <<"\n";
    
}


/*
sizeof('A');   //1
sizeof(11);    //4
sizeof(88.90);   //8
sizeof(88.90f);  //4
*/