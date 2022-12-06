#include<iostream>
using namespace std;

class Demo
{
    public:
        int A, B;
        /*Demo()
        {
            A= 0;
            B= 0;
        }
        Demo(int j)
        {
            A = i;
            B = 0;
        }
        Demo(int i, int j)
        {
            A= i;
            B= j; 
        }*/
        //instead of writing the above code we can write like this

        Demo(int i = 0,  int j = 12)
        {
            A = i;
            B = j;
            cout<<"the value "<<j ;
        }

};
int main()
{
    Demo obj1;
    Demo obj2(11);
    Demo obj3 (10, 11);

    
    return 0;
}