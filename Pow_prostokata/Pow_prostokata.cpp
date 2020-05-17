/* Autor: Krzysztof Lalik

AL_26_02 - Powierzchnia prostokąta */

#include <iostream>

using namespace std;

int main()
{
    long long int n, p, d;
    long int a, b;

   cin>>d;

    for(int i=0; i<d; i++)
    {
        cin>>n;
        if((n%2!=0)||(n<4))
            cout<<"BRAK"<<endl;

        else if(n%2==0)
        {
            a=n/4;
            b=(n/2)-a;
            p=a*b;
            cout<<p<<endl;
        }
    }

    return 0;
}

/* if(n%4==0)
            {
                pow=(n/4)*(n/4);
                cout<<"n/4: "<<n/4<<endl;
                cout<<pow<<endl;
            }

            else
            {
                pow=(n/4)*((n/4)+1);
                cout<<"n/4: "<<n/4<<endl;
                cout<<"n/4+1: "<<(n/4)+1<<endl;
                cout<<pow<<endl;
            }
*/
