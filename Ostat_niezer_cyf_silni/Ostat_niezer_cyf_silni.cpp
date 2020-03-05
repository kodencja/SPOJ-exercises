/* Autor: Krzysztof Lalik

OSTSIL - Ostania niezerowa cyfra silni */

#include <iostream>

using namespace std;
int n, t;
int x;

int main()
{
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        int y=1;
        int silnia=1;
        while(y<=n)
        {
            silnia=silnia*y;
                x=silnia;
                while(x%10==0)
                x=x/10;
                silnia=x%10000;
                y++;
        }
        cout<<silnia%10<<endl;
    }

    return 0;
}
