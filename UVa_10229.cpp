#include<bits/stdc++.h>
using namespace std;
int main()
{
    long m,n;
    while(scanf("%ld %ld",&n,&m)==2)
    {
        vector<long>v;
        long n1=1,n2=1,n3=0;
        long pow1=pow(2,m);
        long pow2=pow1+pow(2,m-1);
        v.push_back(1);
        v.push_back(1);
        for(int i=2;i<pow2;i++)
        {
            n3=n1+n2;
            n1=n2;
            n2=n3%pow1;
            v.push_back(n2);
        }
        int ind=n%pow2;
        if(ind==0) cout<<"0"<<endl;
        else cout<<v[ind-1]<<endl;
        v.clear();
    }
    return 0;
}
