/******************************************************************************

Description : sample code on char arrays
Class : DIS1A
Date : 25/09/2024
Author : GOCL01
Institution : Fontys University of Applied Sciences

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    char arr[5] = {'h', 'e', 'l', 'l', 'o'}; // What 100 will print ? Look at ASCII code
    
    cout << arr[4] << "\n";

    int a = arr[0]+arr[1]+arr[2];
    
    cout<<a<<" "<<arr[0] <<"\n";
    


    return 0;
}
