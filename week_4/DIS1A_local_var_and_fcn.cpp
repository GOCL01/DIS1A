/******************************************************************************
Description : local variables and functions
Class : DIS1A
Date : 25/09/2024
Author : GOCL01
Institution : Fontys University of Applied Sciences

*******************************************************************************/
#include <iostream>

using namespace std;

int sum(int a, int b)
{
    int c = a+b; // local variable c 
    return c;
    
}

int main()
{
    int a=1, b=2, c=1;
    // Call function sum
    sum(a,b);
    cout << c << "\n"; // c keeps the value of c given in main()
    
    c=sum(a,b); // Call function sum and assigned the result to c in main()
    cout << c << "\n"; // c changes to the value of c given in sum()


    return 0;
}

