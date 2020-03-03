/* Autor: Krzysztof Lalik

CALC - Kalkulator */

#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;
char znak;
long int n1, n2;

int main()
{
    while(cin>>znak>>n1>>n2)
    {
        //cout<<" "; znak=getch()


        switch(znak)
        {
        case '+':
            cout<<n1+n2<<endl;
            break;

        case '-':
            cout<<n1-n2<<endl;
            break;

        case '*':
            cout<<n1*n2<<endl;
            break;

        case '/':
            cout<<n1/n2<<endl;
            break;

        case '%':
            cout<<n1%n2<<endl;
            break;
        }
    }
    return 0;
}
