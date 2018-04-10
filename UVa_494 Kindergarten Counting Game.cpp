#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        int c=0,f=1;
        for(int i=0; i<str.length(); i++)
        {
            if((f && str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z' && f)) c++,f=0;
            else if(!f && (str[i]<'A' || str[i]>'Z') && (str[i]<'a' || str[i]>'z'))f=1;
        }
        cout<<c<<endl;
    }
    return 0;
}
