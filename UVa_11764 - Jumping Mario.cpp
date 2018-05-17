#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,t1,t2;
    scanf("%d",&t1);
    for(int i=1;i<=t1;i++)
    {
        int hi=0,lw=0,n;
        scanf("%d",&t2);
        scanf("%d",&n);
        for(int j=0;j<t2-1;j++)
        {
            scanf("%d",&x);

                if(n<x) hi++;
                else if(n>x) lw++;
                n=x;
        }
        printf("Case %d: %d %d\n",i,hi,lw);

    }

    return 0;
}

