#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int ks=0;
    while(cin>>s)
    {
        if(s=="#") break;
        printf("Case %d: ",++ks);
        if(s=="HELLO") cout<<"ENGLISH"<<endl;
        else if(s=="HOLA") cout<<"SPANISH"<<endl;
        else if(s=="HALLO") cout<<"GERMAN"<<endl;
        else if(s=="BONJOUR") cout<<"FRENCH"<<endl;
        else if(s=="CIAO") cout<<"ITALIAN"<<endl;
        else if(s=="ZDRAVSTVUJTE") cout<<"RUSSIAN"<<endl;
        else cout<<"UNKNOWN"<<endl;
    }
    return 0;
}
