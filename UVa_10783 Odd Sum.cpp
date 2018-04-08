#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ks;
    scanf("%d",&ks);
    for(int tc=1; tc<=ks; tc++)
    {
        int a,b,sum=0;
        scanf("%d %d",&a,&b);
        for(int i=a; i<=b; i++)
            if(i&1) sum+=i;
        printf("Case %d: %d\n",tc,sum);
    }
    return 0;
}
