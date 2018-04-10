#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ks;
    while(scanf("%d",&ks) != EOF)
    {
        while(ks--)
        {
            int tc,sum=0;
            scanf("%d",&tc);
            while(tc--)
            {
                int area,anml,env;
                scanf("%d %d %d",&area,&anml,&env);
                sum+=(area*env);
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
