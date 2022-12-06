#include<iostream>
//istream is an class whose object is cin
//ostream is an class whose object is cout

//using namespace std;    //this statement has cout
//cout is an object which is of a class that has been defined in iostream


/*suppose their are two developers, sam and richard who are doing development on same
 project if they concidentally write the same class name than while mergeing 
 the entire code their could be problem so here we use namespace*/

namespace Marvellous
{
    class Demo  
    {
        public:
            int i, j;
            void fun()
            {
                std::cout<<"Inside fun of marvellous\n";
            }

    };
    class Hello
    {
        public:
            int x, y;
    }; 
} 

//at the end of the namespace their is no ; because namespace is not data type 

namespace infosystem
{
    class Demo
    {
        public:
            int a, b;
            void fun()
            {
                std::cout<<"Inside fun of Infosystem \n";
            }
    };
}
int main()
{
    Marvellous::Demo obj1;     //1st method of accessing 
    obj1.fun();
    infosystem::Demo obj2;    
    obj2.fun();

    using namespace Marvellous;   //2nd method of accessing 
    Hello hobj;
    Demo obj3;

    return 0;
}