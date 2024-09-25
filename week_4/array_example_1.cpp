/******************************************************************************

Description : sample code on arrays (week4)
Class : DIS1A
Date : 25/09/2024
Author : GOCL01
Institution : Fontys University of Applied Sciences

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int vector_1[5] = {1,2,3,4,5}; // You can initialize your array (optional)
    
    cout << vector_1[0] << endl; // print 1st element of array
    // remember that in C++, array indexes start at 0
    
    
    
    
    for(int i = 0; i < 5; i++)
    //This loop prints all elements inside array vector_1
        cout << vector_1[i];

    return 0;
}
