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
{
    bool x = true;
    bool y = false;
    bool z;
    
    int a = 3;
    int b = 2;
    int c = 3;
    
    z = (x||y)&&(x||y);
    cout << z << "\n";
    z = (a < b)&&(c==3);
    cout << z << "\n";
    

    return 0;
}
