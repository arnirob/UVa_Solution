#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ks;
    scanf("%d",&ks);
    for(int i=1;i<=ks;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a<=20 && b<=20 && c<=20)
            printf("Case %d: good\n",i);
        else
            printf("Case %d: bad\n",i);
    }

    return 0;
}
