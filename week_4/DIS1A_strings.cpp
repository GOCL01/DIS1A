/******************************************************************************

Description : sample code on strings
Class : DIS1A
Date : 25/09/2024
Author : GOCL01
Institution : Fontys University of Applied Sciences

*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[10]= "Hello"; // Declare a string and initialize it with "Hello"
    char str2[4] = "Bye"; // Declare a string and initialize it with "Hello"
    
    cout << str1[0] << "\n";
    cout << str2[1] << "\n";
    
    cout << strlen(str1) << "\n"; // Print length of str1
    
    strcat(str1, " to all"); // Concatenate strings
    cout << str1 << "\n";
    
    strcpy(str2, str1); // Copy str1 into str2
    cout << str2 << "\n";


    char dest[50] = "Learning C++ is fun";
    char src[50] = " and easy";

    strcat(dest, src);
    
    cout << dest ;
    

    return 0;
}
