#include<bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    while(cin>>num)
    {
        int sum=0,f=1;
        for(int i=0; num[i]; i++)if(num[i]-'0'>0) f=0;
        if(f) break;
        for(int i=0; num[i]; i++)
        {
            if(i&1) sum+=(num[i]-'0');
            else sum-=(num[i]-'0');
        }
        if(sum<0) sum*=(-1);
        if(sum%11==0) cout<<num<<" is a multiple of 11."<<endl;
        else cout<<num<<" is not a multiple of 11."<<endl;
    }
    return 0;
}
