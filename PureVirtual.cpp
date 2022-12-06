#include<iostream>
using namespace std;

class circle
{ 
    public:                //access specifier
        float Pi;          //characteristics
        float Radius;

        circle()          //default constrictor
        {
            Pi = 3.14;
            Radius = 0.0;
        }
        circle(float A, float B)   //parameterized constructor 
        {
            Pi = A;
            Radius = B;
        }
        void Display()          //concrete method
        {
            cout<<"Value of radius is :"<<Radius<<"\n";
        }
        virtual float Area() = 0;      //pure vitual function or abstract function 
        virtual float circumference() = 0;   //pure vitual function or abstract function 
};

class Marvellous: public circle
{
    public:
        Marvellous() : circle()
        {

        }
        Marvellous(float X, float Y) : circle (X, Y)
        {

        }
        float Area()   //concrete method 
        {
            float Ans = Pi * Radius * Radius;
            return Ans;
        }
        float circumference()    //concrete method
        {
            float Ans = 2 * Pi * Radius;
            return Ans; 
        }
};

int main ()
{
    Marvellous mobj1;
    Marvellous mobj2(3.14, 10.89);

    float fret = 0.0;

    fret = mobj2.Area();
    cout<<"Area is :"<<fret<<"\n";

    fret = mobj2.circumference();
    cout<<"circumference is:"<<fret<<"\n";

    return 0; 
}