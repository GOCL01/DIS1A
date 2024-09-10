/******************************************************************************

Description : sample code if and else statment
Class : DIS1A
Date : 10/09/2024
Author : GOCL01
Institution : Fontys University of Applied Sciences

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int age;
    
    cout << "Input an age : ";
    cin >> age;
    
    
    if(age<16) 
    {
        cout<<"You are a kid \n";
    }
    else
    {
        cout<<"You are an adult \n"; 
    }

    return 0;
}
