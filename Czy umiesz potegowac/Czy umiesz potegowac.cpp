/* Autor: Krzysztof Lalik

PA05_POT - Czy umiesz potêgowaæ */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{

int tablica[10][4] =
{
{0, 0, 0, 0},
{1, 1, 1, 1},
{6, 2, 4, 8},
{1, 3, 9, 7},
{6, 4, 6, 4},
{5, 5, 5, 5},
{6, 6, 6, 6},
{1, 7, 9, 3},
{6, 8, 3, 2},
{1, 9, 1, 9}
};
unsigned long int a, b;
int D;
cin>>D;
for(int i=0; i<D; i++)
{

cin>>a;
cin>>b;

cout<<tablica[a%10][b%4]<<endl;
}
/*
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
    unsigned long int a,b,p;
    cin>>a>>b;
    if(a>10) a=a%10;

    while(b>4)
    {
    b-=4;
    }
    p=pow(a,b);
    cout<<p%10<<endl;
    }
*/
    return 0;
}
