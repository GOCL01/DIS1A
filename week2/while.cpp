/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main() {
  int number, sum=0;
  bool next=1;

  
// *************WHILE DO**************

  while(next == 1)
  {
    cout<<"\nEnter a number: ";
    cin >> number;
    sum += number;
    
    cout << "\nDo you want to continue ?";
    cin >> next;

  }

 
// *************DO WHILE**************
/*
do
{
    cout<<"\nEnter a number: ";
    cin >> number;
    sum += number;
    cout << "Sum = " << sum;
    
    cout << "\nDo you want to continue ?";
    cin >> next;
}
while(next == 1);
*/

  cout << "Sum = " << sum; 
  return 0;
}
