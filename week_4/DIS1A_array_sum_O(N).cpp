/******************************************************************************

Description : sample code code complexity O(N)
Class : DIS1A
Date : 25/09/2024
Author : GOCL01
Institution : Fontys University of Applied Sciences


*******************************************************************************/
#include <iostream>

using namespace std;
int main()
{   int size = 5; // length of vector
    int a[size] = {1,2,3,4,5};
    int b[size] = {1,2,3,4,5};
    int c[size];
    
    for(int i=0; i<size; i++)
        c[i] = a[i]+b[i];      // adding element by element of a and b, this is also an example
                               // of O(N) complexity
        

    return 0;
}
