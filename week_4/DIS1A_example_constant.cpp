/******************************************************************************

Description : sample code on constant values
Class : DIS1A
Date : 25/09/2024
Author : GOCL01
Institution : Fontys University of Applied Sciences

*******************************************************************************/
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // declaring a variable 
    int var = 10; 
  
    // declaring a constant variable 
    const int cons = 24; 
  
    cout << "Initial Value:" << endl; 
    cout << "var: " << var << endl; 
    cout << "cons: " << cons << endl; 
  
    // changing the value of both the constants 
    var = 24; 
    //cons = 0; // if you change the value of a constant you will get an error
  
    cout << "Final Value:" << endl; 
    cout << "var: " << var << endl; 
    cout << "cons: " << cons << endl; 
  
    return 0; 
}
