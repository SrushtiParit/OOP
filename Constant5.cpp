#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;        // constant characteristics
        // Parametrised constructor with DEFAULT values
        Demo(int x = 10, int y = 20) : j(y)
        {
            i = x;
        }
        void fun()
        {
            int a = 10;
            const int b = 20;       // constant variable
            i++;    // A (line 7)
            j++;    // NA (line 8)
            a++;    // A (line 16)
            b++;    // NA (line 17)
        }
        void gun() const            // constant behaviour
        {
            int a = 10;
            const int b = 20;
            i++;   // NA (line 23)  (class chya characteristics change honar nhit 
            j++;    // NA (line 23)  (also line 8 is responsible for this)
            a++;    // A   (line 25)
            b++;    // NA (line 26)
        }

};
int main()
{
    Demo obj1(11,21);   // 11   21
    const Demo obj2(11,21);     // 11   21      // Constant object

    obj1.fun(); // A
    obj1.gun(); // A
    obj2.fun(); // NA
    obj2.gun(); // A

    obj1.i++;   // A 
    obj1.j++;   // NA
    obj2.i++;   // NA
    obj2.j++;   // NA

    return 0;
}