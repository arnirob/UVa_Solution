#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ks=0,tc;
    scanf("%d",&tc);
    double d,v,u;
    while(tc--)
    {
        ks++;
        scanf("%lf %lf %lf",&d,&v,&u);
        if(v==0 || u==0 || u<=v) printf("Case %d: can't determine\n",ks);
        else
        {
            double fast=(d/u);
            double shrt=(d/sqrt((u*u)-(v*v)));
            double dif=abs(fast-shrt);
            printf("Case %d: %.3lf\n",ks,dif);
        }
    }
    return 0;
}
