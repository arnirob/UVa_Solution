#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,m,n,cola;
    while(scanf("%d",&n)!=EOF)
    {
        cola=0;

        if(n&1)
        {
            m=n;
            for(int i=0;i<n;i++)
            {
                x=m/3;
                cola+=x;
                m=(m%3)+x;
            }
        }

        else
        {
            m=n;
            m=m+1;
            for(int i=0;i<n;i++)
            {

                x=m/3;
                cola+=x;
                m=(m%3)+x;
            }
        }
        printf("%d\n",cola+n);

    }



    return 0;
}

