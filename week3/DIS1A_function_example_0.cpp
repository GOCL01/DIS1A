/******************************************************************************

Description : sample code on functions
Class : DIS1A
Date : 17/09/2024
Author : GOCL01
Institution : Fontys University of Applied Sciences

*******************************************************************************/
#include <iostream>

using namespace std;

double volume(double a, double b, double c)
{   
    /*
    Remember to ALWAYS document what your defined function does
    volume function returns a double variable v that contains
    the result of the calculation of a volume of a cuboid
    Arguments : a (double), b (double), c (double) are width, length and depth.
    */
    double v = a*b*c;
    return v ;
}


int main()
{   

    double v;
    double a=1,b=2,c=3;
    
    cout<<"This function calculates volume "<<'\n';
    v=volume(a,b,c); 
    
    cout<<"The volume is : " << v;

    return 0;
}
