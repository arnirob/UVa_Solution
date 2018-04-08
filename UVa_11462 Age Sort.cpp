#include<bits/stdc++.h>
using namespace std;
vector< int > v;
int main()
{
    int ks;
    while((scanf("%d",&ks)),ks)
    {
        int k=ks;
        while(k--)
        {
            int n;
            scanf("%d",&n);
            v.push_back(n);
        }
        sort(v.begin(),v.end());
        for(int i=0; i<ks; i++)
        {
            if(i==ks-1) printf("%d\n",v[i]);
            else printf("%d ",v[i]);
        }
        v=vector< int >();
    }
    return 0;
}
