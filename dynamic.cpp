#include<iostream>
using namespace std;

int main ()
{
    int *p = NULL;
    p = new int [5]; //
    // p = (int *)malloc(5 * sizeof(int));
    // use the memory
    delete [] p ;  //there is no such line in java 
    //free (p);
    return 0;
}