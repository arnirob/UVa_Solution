#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);
    int hd,knt;
    while(scanf("%d %d",&hd,&knt),hd||knt)
    {
        int hdd[hd+5];
        int kntt[knt+5];

        for(int i=0; i<hd; i++)
            scanf("%d",hdd+i);

        for(int i=0; i<knt; i++)
            scanf("%d",kntt+i);

        sort(hdd,hdd+hd);
        sort(kntt,kntt+knt);

        int sum=0,t=0;
        int a=0;
        for(int i=0; i<hd; i++)
        {
            for(int j=a; j<knt; j++)
            {
                if(kntt[j]>=hdd[i])
                {
                    sum+=kntt[j];
                    t++;
                    a=j+1;
                    break;
                }
            }
        }
        if(t<hd) printf("Loowater is doomed!\n");
        else printf("%d\n",sum);

    }
    return 0;
}
