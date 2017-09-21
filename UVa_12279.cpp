#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cs=1;
    while(scanf("%d",&t),t)
    {
        int c1=0,c0=0,x;
        while(t--)
        {
            scanf("%d",&x);
            if(x==0) c0++;
            else c1++;
        }
        int n= c0>c1 ? c1-c0 : c1-c0;
        printf("Case %d: %d\n",cs,n);
        cs++;
    }
    return 0;
}
