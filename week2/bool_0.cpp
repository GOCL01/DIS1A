/******************************************************************************

Description : sample code bool variables
Class : DIS1A
Date : 10/09/2024
Author : GOCL01
Institution : Fontys University of Applied Sciences

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{ // Declare some Boolean variables

    bool a = true, b = false;
    cout << "a = " << a << ", b = " << b << '\n';
    // Reassign a
    a = false;
    cout << "a = " << a << ", b = " << b << '\n';
    // Mix integers and Booleans
    a = 1;b = 1;
    cout << "a = " << a << ", b = " << b << '\n';
    // Assign Boolean value to an integer
    int x = a, y = true;
    cout << "a = " << a << ", b = " << b<< ", x = " << x << ", y = " << y << '\n';
    // More mixinga = 1725; // Warning issuedb = -19; // Warning issued
    cout << "a = " << a << ", b = " << b << '\n';
    
}

