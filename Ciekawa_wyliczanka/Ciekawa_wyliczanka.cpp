/* Autor: Krzysztof Lalik

ETI06F2 - Ciekawa wyliczanka */


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

long double k;

string potega(string p, string z, int w)
{
    if (w==0)
        return p;
    else
    {
        string poteg="";
        poteg=p;
        for(int i=0; i<w; i++)
            poteg=poteg+z;
        return poteg;
    }

}

int main()
{
        cin>>k;

        int nr_wykl_1=0;
        int n=0;
        int np1=0;
        int np2=0;
        int np3=0;
        int diff=0;
        int dz=0;
        int r=0;
        int dzielnik=0;
        string jeden="1";
        string zero="0";
        string dodatek;
        string suma_dodatkow="";

        for(int i=0; n*2<k; i++)
        {
            n=pow(2,i)-1;
            np1=i;
            nr_wykl_1=np1;
        }

        string piatka="";
        for(int i=0; i<np1; i++)
        {
            piatka=piatka+"5";
        }
        diff=(k+1)-n;

        for(int i=0; dzielnik*2<diff; i++)
        {
            dzielnik=pow(2,i);
            np2=i;
            np3=np2;
        }

        for(int i=dzielnik; i>=1; i=i/2)
        {
            dodatek="";
            string t="";
            dz=diff/i;
            r=diff%i;

            if((dz==1)&&(r>0))
                dodatek=potega(jeden,zero,np2);
            else if((dz%2!=0)&&(r>0))
                dodatek=potega(jeden,zero,np2);
            else if((dz%2==0)&&(r==0))
                dodatek=potega(jeden,zero,np2);

            if(np2==np3)
            {
                suma_dodatkow=dodatek;
            }

            else if((np2!=np3)&&(dodatek!=""))
            {
                t=dodatek.substr(0,1);
                suma_dodatkow.replace(np3-np2,1, t);
            }
            np2--;
        }

        for(int i=0; i<=np3; i++)
        {
            if(suma_dodatkow[i]=='1')
            {
                piatka.replace(nr_wykl_1-1-(np3-i),1,"6");
            }
        }
        cout<<piatka<<endl;

    return 0;
}
