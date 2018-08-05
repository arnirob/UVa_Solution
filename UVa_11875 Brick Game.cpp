#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ks=0,tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,v,x;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&v);
            if(i==n/2) x=v;
        }
        printf("Case %d: %d\n",++ks,x);
    }
    return 0;
}
