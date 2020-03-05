/* Autor: Krzysztof Lalik

PP0602A - Parzyste nieparzyste */

#include <iostream>

using namespace std;

int main()
{
    int liczba[100];
    int z;
    int ile_liczb;

    cin>>z;

    for(int i=0; i<z; i++)
    {
        cin>>ile_liczb;
        for(int j=0; j<ile_liczb; j++)
        {
            cin>>liczba[j];
        }
        for(int k=1; k<ile_liczb; k=k+2)
        {
            cout<<liczba[k]<<" ";
        }

        for(int k=0; k<ile_liczb; k=k+2)
        {
            cout<<liczba[k]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
