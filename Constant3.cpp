#include<iostream>
using namespace std;

class Demo      //size of class 8
{
    public:
        int i;
        int j;

        Demo()
        {
            i = 11;
            j = 21;
        }
        Demo(int x, int y)
        {
            i = x;
            j = y;
        }
};

int main()
{
    Demo obj1;
    Demo obj2(10,20);

    const Demo obj3;
    const Demo obj4(10,20);

    obj1.i++;
    //obj4.i++;
    //obj3.j++;
    obj1.j++;

//we cannot just const a single characteristics while creating an object
//if we wan one characteristics to be const than do it in class only
    
    return 0;
}