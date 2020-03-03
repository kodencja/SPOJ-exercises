/* Autor: Krzysztof Lalik

NIEKOLEJ - Niekolejne */

#include <iostream>

using namespace std;
int polowa, n;

int main()
{

    cin>>n;
    int tablica[n+1];
    for(int i=0; i<=n+1; i++)
    {
        tablica[i]=i;
    }

    polowa=(n+1)/2;

    if((n==2)||(n==1))
        cout<<"NIE"<<endl;
    else if(n==0)
        cout<<n;
    else
    {
        if((n/2)*2!=n)
        {
            for(int i=0; i<polowa; i++)
            {
                cout<<tablica[polowa+i]<<" ";
                cout<<tablica[i]<<" ";
            }
        }
        else
        {
            for(int i=0; i<polowa; i++)
            {
                cout<<tablica[polowa+i]<<" ";
                cout<<tablica[i]<<" ";
            }
            cout<<n;
        }

    }

    return 0;
}
