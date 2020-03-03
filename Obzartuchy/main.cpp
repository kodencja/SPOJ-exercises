/* Autor: Krzysztof Lalik

GLUTTON - Ob¿artuchy */

#include <iostream>

using namespace std;
int N, M;
int d=86400;
int t[99999];
int x[99999];

int ile_p;
int a;


int main()
{
    cin>>a;
for(int i=1; i<=a; i++)
{
    int suma=0;
    cin>>N>>M;  //N- liczba obzartuchow, M- ilosc ciastek w 1 pudelku

     for(int i=0; i<N; i++)
    {
        cin>>t[i]; //predkosc jedzenia 1 ciastka przez danego obzartucha
        x[i]=d/t[i];  //czyli ile ciastek zje kazdy w ciagu 24h
        suma=suma+x[i];
    }

   if((suma%M)==0)
    {ile_p=suma/M;  //ile_p to ile pudelek z ciastkami
    cout<<ile_p<<endl;}
  else
    {ile_p=(suma/M)+1;
    cout<<ile_p<<endl;}
}
    return 0;
}
