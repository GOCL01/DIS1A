/******************************************************************************

Description : sample code on functions and arrays
Class : DIS1A
Date : 25/09/2024
Author : GOCL01
Institution : Fontys University of Applied Sciences

*******************************************************************************/
#include <iostream>

using namespace std;
void printArray(int a[])
{
    /* This function prints the values of an array*/
    for(int i=0; i<5; i++)
        cout << a[i];
    
}

int main()
{
    int a[5] = {1,2,3,4,5}; // Create and initialize an array of 5 elements
    
    printArray(a);
    return 0;
}
