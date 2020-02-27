/* Autor: Krzysztof Lalik

MWP3_3D - Dzielenie pizzy
*/

#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;
int z, l_os; //z-iloœæ zestawów; L_os - liczba osób
long long a;  //a - d³ugoœæ boku kartonu czyli œrednica pizzy,
double x; //co ile cent ci¹æ pizzê
int y; //ile wykonaæ ciêæ

int main()
{
    cin>>z;

    for(int i=1; i<=z; i++)
    {
       cin>>a>>l_os;
       if(l_os%2==0)
       {
          y=l_os/2;
          x=(M_PI*a)/l_os;
          //x=(round(((M_PI*a)/l_os)*1000))/1000;
          cout<<fixed<<setprecision(3)<<x<<" "<<y<<endl;
       }

       else
       {
            y=l_os;
            //x=(round(((M_PI*a)/(l_os*2))*1000))/1000;
           //cout<<x<<" "<<y<<endl;
            x=(M_PI*a)/(l_os*2);
            cout<<fixed<<setprecision(3)<<x<<" "<<y<<endl;
       }
    }

    return 0;
}
