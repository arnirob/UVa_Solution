#include<bits/stdc++.h>
using namespace std;
int main()
{
    string hajj;
    int i=1;
    while(cin>>hajj)
    {
        if(hajj=="*") break;
        else if(hajj=="Hajj") cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        else cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
        i++;
    }
    return 0;
}
