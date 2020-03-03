/* Autor: Krzysztof Lalik

CALC2 - Kalkulator 2 */

#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

char znak;
long int n1, n2;
int rejestr[10];

int main()
{

    while(cin>>znak>>n1>>n2)
    {
        //cout<<" "; znak=getch()

        if(znak=='z')
            rejestr[n1]=n2;

        else
        {
            switch(znak)
            {
            case '+':
                cout<<rejestr[n1]+rejestr[n2]<<endl;
                break;

            case '-':
                cout<<rejestr[n1]-rejestr[n2]<<endl;
                break;

            case '*':
                cout<<rejestr[n1]*rejestr[n2]<<endl;
                break;

            case '/':
                cout<<rejestr[n1]/rejestr[n2]<<endl;
                break;

            case '%':
                cout<<rejestr[n1]%rejestr[n2]<<endl;
                break;
            }
        }
    }
    return 0;
}
