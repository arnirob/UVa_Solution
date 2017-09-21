#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        int x,c=0;
        for(int i=0;i<5;i++)
        {
            scanf("%d",&x);
            if(x==t) c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
