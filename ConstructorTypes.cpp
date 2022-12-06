#include<iostream>
using namespace std;

class demo
{
    public:
        int i, j;
        //here we can say demo function has been oevrloaded
        demo()
        {
            i = 0;
            j = 0;
        }
        demo(int a, int b)
        {
            i = a;
            j = b;
        }
        demo (demo &ref)
        {
            i = ref.i;
            j = ref.j;
        }
};
int main()
{
    demo obj1;
    demo obj2(10,11);
    demo obj3(obj2);

    cout<<obj1.i<<"\t"<<obj1.j<<"\n";
    cout<<obj2.i<<"\t"<<obj2.j<<"\n";
    cout<<obj3.i<<"\t"<<obj3.j<<"\n";
    return 0;
}