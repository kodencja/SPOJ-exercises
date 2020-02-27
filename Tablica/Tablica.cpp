/* Autor: Krzysztof Lalik

TABLICA - Tablica */

#include <iostream>

using namespace std;



int main()
{

int tab[1000];
int n=0;


   while(cin>>tab[n])
    {
        n++;
    }

    for(int i=n-1; i>=0; i--)
    {
    cout<<tab[i]<<" ";
    }
    cout<<endl;

    return 0;
}
