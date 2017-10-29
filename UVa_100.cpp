#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);

    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        int f=0;
        if(m>n)
        {
            f=1;
            int tmp=m;
            m=n;
            n=tmp;
        }
        int mx=0;
        int cunt=0;
        for(int i=m;i<=n;i++)
        {
            cunt=0;
            int x=i;
            while(x>1)
            {
                if(x&1)
                    x=(3*x)+1;

                else
                    x/=2;

                cunt++;
            }
            if(mx<cunt)
                mx=cunt;
        }
        if(f)
            printf("%d %d %d\n",n,m,mx+1);

        else
            printf("%d %d %d\n",m,n,mx+1);
    }
    return 0;
}
