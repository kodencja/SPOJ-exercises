/* Autor: Krzysztof Lalik

PP0502B - Tablice */

#include <iostream>

using namespace std;

int main()
{
    int t; //liczba testow
    int tab[100];
    int ile_liczb;

    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>ile_liczb;
        int n=0;
        while(n<ile_liczb)
        {
            cin>>tab[n];
            n++;
        }

        for(int j=n-1; j>=0; j--)
        {
            cout<<tab[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
