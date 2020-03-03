/* Autor: Krzysztof Lalik

PTROL - ROL - Przesuñ elementy tablicy cyklicznie w lewo. */

#include <iostream>

using namespace std;
int n, liczba;
int z;


int main()
{
    cin>>z;

    for(int i=0; i<z; i++)
    {
    cin>>n;
    int tab1[n];
    int tab2[n];

    for(int i=0; i<n; i++)
    {
        cin>>liczba;
        tab1[i]=liczba;
    }

    for(int i=0; i<n; i++)
    {
        if(i<(n-1))
        {tab2[i]=tab1[i+1];
        cout<<tab2[i]<<" ";
        }

        else
        {tab2[n-1]=tab1[0];
        cout<<tab2[n-1]<<endl;
        }
    }
    }

    return 0;
}
