/* Autor: Krzysztof Lalik

FLAMASTE - Flamaster */

#include <iostream>

using namespace std;
int a, b, z;

int main()
{
    cin>>z;

    for(int i=0; i<z; i++)
    {
        cin>>a>>b;

       do
       {
           if(a<b)
           b=b-a;

           else if(b<a)
            a=a-b;
       }
       while(b!=a);

       if(a==b)
        cout << a+b<< endl;
    }


    return 0;
}
