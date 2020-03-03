/* Autor: Krzysztof Lalik

PP0501A - NWD - szukanie najwiekszego wspolnego dzielnika */

#include <iostream>

using namespace std;
int a, b, z;

long int nwd(long int x, long int y)
{
          if(x>y)
        {
            for(long int i=y; i>=1; i--)
            {
                if((x%i==0)&&(y%i==0))
                   {
                     return i;
                    i=1;
                   }

            }
        }

         else if(y>=x)
         {
           for(long int i=x; i>=1; i--)
            {
                if((x%i==0)&&(y%i==0))
                   {
                     return i;
                    i=1;
                   }


            }
        }
}

int main()
{
   a>0;
   a<1000000;
   b>0;
   b<1000000;

    cin>>z;

    for(int i=0; i<z; i++)
    {
        cin>>a>>b;
        cout<<nwd(a,b)<<endl;

    }


    return 0;
}
