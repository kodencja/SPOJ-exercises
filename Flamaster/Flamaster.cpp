/* Autor: Krzysztof Lalik

FLAMASTE - Flamaster */

#include <iostream>
#include <sstream>


using namespace std;
string wyraz, napis;
int c;
int main()
{
    cin>>wyraz;
    cin>>c;
    ostringstream ss;
    ss << c;
    string str = ss.str();
    /*string tmp; // brzydkie rozwi�zanie
    sprintf((char*)tmp.c_str(), "%d", c);
    string str = tmp.c_str();*/
    cout<<c<<endl;
    cout<<ss<<endl; //pokazuje miejsce w pami�ci
    napis = wyraz+str;
    cout<<napis;
    return 0;
}
