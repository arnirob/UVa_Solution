#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ks;
    scanf("%d",&ks);
    for(int i=1; i<=ks; i++)
    {
        int c,ts,big=INT_MIN;
        scanf("%d",&ts);
        while(ts--)
        {
            scanf("%d",&c);
            if(c>big) big=c;
        }
        printf("Case %d: %d\n",i,big);
    }
    return 0;
}
