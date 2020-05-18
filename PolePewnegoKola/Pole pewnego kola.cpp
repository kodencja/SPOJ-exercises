/* Autor: Krzysztof Lalik

ETI06F1 - Pole pewnego koła */

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
double r;
double d;

double pole(double a, double b)
{
    return (a*a-((b/2)*(b/2)))*3.141592654;
}
int main()
{
    cin>>r>>d;
    cout<<setprecision(10);
    cout<<pole(r,d);


    return 0;
}
