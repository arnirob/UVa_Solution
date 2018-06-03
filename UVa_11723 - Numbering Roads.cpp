#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rd,n,c=0;
    while(scanf("%d %d",&rd, &n),rd|n)
    {
        printf("Case %d: ",++c);
        if(rd<=n) printf("0\n");
        else if((rd-n)>(26*n)) printf("impossible\n");
        else
        {
            rd-=n;
            if(rd<n) printf("1\n");
            else
            {
                if(rd%n) printf("%d\n",(rd/n)+1);
                else printf("%d\n",rd/n);
            }
        }
    }
    return 0;
}
