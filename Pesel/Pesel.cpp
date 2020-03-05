/* Autor: Krzysztof Lalik

JPESEL - Pesel */


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>

using namespace std;

int main()
{
    int pesel[11];
    int z, suma;
    int nr;
    string peselstr, szufladka;

    cin>>z;

    for(int i=0; i<z; i++)
    {
    cin>>peselstr;

    for(int i=0; i<11; i++)
    {
        szufladka=peselstr.substr(i,1); //wyjmuje ze stringa peselstr jeden znak poczynajac od miejsca 0 i...
        istringstream iss(szufladka);
        iss >> nr; //...zamieniam ten znak na inta nr, a ten z kolei na liczbe w tablicy pesel[]
        pesel[i]=nr;
    }
        suma=pesel[0]*1+pesel[1]*3+pesel[2]*7+pesel[3]*9+pesel[4]*1+pesel[5]*3+pesel[6]*7+pesel[7]*9+pesel[8]*1+pesel[9]*3+pesel[10]*1;

        if(suma>0)
        {
            if(suma%10==0)
                cout<<endl<<"D";
            else
                cout<<endl<<"N";
        }
    }

    return 0;
}
