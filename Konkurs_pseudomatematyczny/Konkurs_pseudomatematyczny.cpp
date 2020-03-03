/* Autor: Krzysztof Lalik

MWPZ06H - Konkurs pseudomatematyczny */

#include <iostream>

using namespace std;
int z, liczba_uczestnikow;
int main()
{
    cin>>z;

    for(int k=0; k<z; k++)
    {
        cin>>liczba_uczestnikow;
        int *punkty(0);
        punkty = new int [liczba_uczestnikow];

        //wczytanie punktow dla poszczegolnych uczestnikow
        for(int i=0; i<liczba_uczestnikow; i++)
        {
            cin>>punkty[i];
        }

        int tab[liczba_uczestnikow];

        for(int i=1; i<liczba_uczestnikow; i++)
        {
            int bufor=0;

            //sortowanie rosnace
            for(int j=liczba_uczestnikow-1; j>=1; j--)
            {
                if(punkty[j]<punkty[j-1])
                {
                    bufor=punkty[j];
                    punkty[j]=punkty[j-1];
                    punkty[j-1]=bufor;
                }
            }
            if(bufor==0)
                bufor=punkty[i-1];
            else if(bufor!=punkty[i-1])
                bufor=punkty[i-1];
        }

        int m=punkty[liczba_uczestnikow-1];
        int p=0;

        for(int i=liczba_uczestnikow-1; i>=0; i--)
        {
            if(punkty[i]==m)
            {p++;
            tab[p-1]=punkty[i];
            }
        }

        for(int i=0; i<liczba_uczestnikow-p; i++)
        {
            tab[i+p]=punkty[i];
        }

        for(int i=0; i<liczba_uczestnikow; i++)
        {
            cout<<tab[i]<<" ";
        }
        cout<<endl;

        delete [] punkty;
    }

    return 0;
}
