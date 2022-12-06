#include<iostream>
using namespace std;


/*problem: In c++ 17 that we are learning initialization at the time of 
declaration is allowed but it is an bad programming practice so we should 
initialize the constant characteristics in default constructor
*/
class Demo
{
    public:
        int i;
        int j;
        const int k;      //now here the problem is we dont have 
        const int l;      //any memory here but we have to initialize 
                         //as const in c++ needs to initialized
        
        // Default constructor
        Demo() : k(11), l(21)    //here k & l gets memory before of memory allocation 
        {
            i = 51;     //i & j get memory after memory allocation  
            j = 101;
        }
        // Parametrised constructor
        Demo(int a, int b, int c, int d) : k(c), l(d)
        {
            i = a;
            j = b;
        }
};

int main()
{
    Demo obj1;
    Demo obj2(10,20,30,40);
    //obj1.k++; NA
    //obj2.k++; NA
    obj1.i++;
    obj2.i++;


//if we initialized at the time of declaration than the 
//ans of both the statements below will be same 
//means value of k for every object is going to be same 
    cout<<obj1.k<<"\n";
    cout<<obj2.k<<"\n";
    return 0;
}

/*
1. every object gets separate memory so obj1 cha k is different and obj2 cha k is different
2. if a class contains constant than it indirectly becomes compulsory to write a
   constructor to initialize those constant characteristics
*/
