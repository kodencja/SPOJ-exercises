/* Autor: Krzysztof Lalik

PP0601B - Podzielnoœæ*/

#include <iostream>

using namespace std;
int t, n, x, y;
int podz_x;
int main()
{
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n>>x>>y;

           for(int j=1; j<n; j++)
            {
                int podz_x=x*j; //liczby przed n ktore dziela sie przez x
                if(podz_x+x>=n)
                    j=n;
                if(podz_x%y!=0)  //niepodzielne przez y
                    cout<<podz_x<<" ";
            }
            cout<<endl;

    }

    return 0;
}
