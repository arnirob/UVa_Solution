#include<bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2)
{
    if (n2 != 0)
        return gcd(n2, n1%n2);
    else
        return n1;
}
int main()
{
    int n;
    while(scanf("%d",&n),n)
    {
        int cunt=0,t=0;
        int arr[n+5];
        for(int i=0; i<n; i++)
            scanf("%d",arr+i);

        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                t++;
                if(gcd(arr[i],arr[j])==1)
                {
                    cunt++;
                }
            }
        }
        if(cunt)
        {
//            int st=(n*(n-1))/2;
            double pi=sqrt((6*(double)t)/(double)cunt);
            printf("%lf\n",pi);
        }
        else
            printf("No estimate for this data set.\n");
    }

    return 0;
}

