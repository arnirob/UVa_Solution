#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ks;
    scanf("%d",&ks);
    while(ks--)
    {
        int d,s;
        scanf("%d %d",&s,&d);
        if(d>s||(s-d)&1)
            printf("impossible\n");
        else
        {
            int x=(s-d)/2;
            printf("%d %d\n",x+d,x);
        }
    }
    return 0;
}
