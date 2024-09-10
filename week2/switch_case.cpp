/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main() {
    int value; // mentione restrictions on datatypes
    cout << "Please enter an integer in the range 0...5: ";
    cin >> value;
    switch (value)
    {
    case 0:
    cout << "the integre is zero";
    break;
    case 1:
    cout << "the integre is one";
    break;
    case 2:
    cout << "the integre is two";
    break;
    case 3:
    cout << "the integre is three";
    break;
    default:
    cout << "Number is out of range";
    break;

    }
 return 0;   
}
