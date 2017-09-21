#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b))
    {
        if(a==-1&&b==-1) break;
        else
        {
            if(a<b)
            {
                int x=b-a;
                int y=(100-b)+a;
                printf("%d\n",x<y?x:y);
            }
            else
            {
                int x=(100-a)+b;
                int y=a-b;
                printf("%d\n",x<y?x:y);
            }
        }
    }
    return 0;
}
