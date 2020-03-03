/* Autor: Krzysztof Lalik

FR_05_09 - Obwód prostok¹ta */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int z, b, x;
    int pow, obwod;
    int a;

    cin>>z;

    for(int i=0; i<z; i++)
    {
        cin>>pow;

        if(pow==1)
            obwod=4;
        else if(pow==2)
            obwod=6;
        else if(pow==3)
            obwod=8;

        else if(pow>3)
        {
            x = floor(sqrt(pow));
            if(x*x==pow)
            {
                obwod=4*x;
            }
            else if(x*x!=pow)
            {
                for(int j=x; j>=1; j--)
                {
                    b = floor(pow/j);
                    if(j*b==pow)
                    {
                        a=j;
                        j=1;
                    }
                }
                obwod=2*a + 2*b;
            }
        }
        cout<<obwod<<endl;
    }
    return 0;

}
