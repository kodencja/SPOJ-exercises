/* Autor: Krzysztof Lalik

PRIME_T - Liczby Pierwsze */

#include <iostream>
#include <cstdio>

using namespace std;
int a, z;

int main()
{
    cin>>z;

    for(int j=0; j<z; j++)
    {
        bool pierwsza=true;

        cin>>a;

        if(a==1)
            pierwsza=false;

        for(int i=2; i*i<=a; i++)
        {
            if(a%i==0)
                pierwsza=false;
        }

        if(pierwsza)
            cout<<"TAK"<<endl;
        else
            cout<<"NIE"<<endl;
    }


return 0;
}
