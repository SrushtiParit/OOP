#include<iostream>
using namespace std;


class demo
{
    public:          //accesss specifier
        int i;       //instance variable 
        int j;       //instance variable 
        //this is the declaration of static variable.
        static int k;  //class variable 
        static int l;   //class variable
    demo()             //default constructor 
    {
        i = 0;
        j = 0;
    }
    demo(int a, int b)   //parameterized constructor 
    {
        i = a;
        j = b;
    }
    void fun() //instance variable 
    {
        //it can access static + non static variables
        cout<<"Inside fun\n";
        cout<<"value of i : "<<this->i<<"\n";
        cout<<"value of j : "<<this->j<<"\n";
        cout<<"value of l : "<<l<<"\n";
        cout<<"value of k : "<<k<<"\n";
    }
    static void gun()  
    {
        //it can access static variables
        cout<<"inside gun\n";
        cout<<"value of k: "<<k<<"\n";
        cout<<"value of l: "<<l<<"\n";

    }


};

int demo::k = 0;  // k is not a global variable, its initialization of static variable
// k should be initialized after class 
// as k is static variable also called as class variable means althroughout class it will only once get memory.
//here k gets memory.
//Load time variable: memory is allocated at the time of loading the executable file.

int demo::l = 0;
int main()
{
    cout<<"inside main\n";
    cout<<"The Value of K: "<<demo::k<<"\n";  //without creating obj we can access static variable
    cout<<"The Value of K: "<<demo::l<<"\n";  
    demo::gun();

    demo obj1(10,11);
    demo obj2(20,21);
   
    cout<<"The Value of i in obj1: "<<obj1.i<<"\n";
    cout<<"The Value of i in obj2: "<<obj2.i<<"\n";
    cout<<"The Value of j in obj1: "<<obj1.j<<"\n";
    cout<<"The Value of j in obj2: "<<obj2.j<<"\n";

    obj1.fun();
    obj2.fun();

    obj1.gun();   //demo::gun(); it does not consider object 
    
    demo obj;
    cout<<sizeof(obj)<<"\n";  //8
    
    return 0;

    //size of object is summation of sizes of its non static characteristics
    //sizeof(obj)= sizeof(i)+sizeof(j)
    //sizeof(obj) = 4+4 = 8
}