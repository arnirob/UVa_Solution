#include<bits/stdc++.h>
using namespace std;
int j=1;
void bin_search(int n,int q,int nn[],int qq[])
{
    printf("CASE# %d:\n",j);
    for(int i=0; i<q; i++)
    {
        int low=0;
        int high=n-1;
        int mid=low+(high-low)>>1;
        while(low<=high)
        {
            if(nn[mid]<qq[i])
                low=mid+1;

            else if(nn[mid]==qq[i])
            {
                for(int d=0;d<n;d++)
                {
                    if(qq[i]==nn[d])
                        {
                            printf("%d found at %d\n",qq[i],d+1);
                            break;
                        }
                }
                    break;
            }
            else
                high=mid-1;

            mid=(high+low)/2;
        }
        if(low>high)
            printf("%d not found\n",qq[i]);
    }
    j++;
}
int main()
{
    int n,q;
    while(scanf("%d %d",&n,&q),n||q)
    {
        int nn[n];
        int qq[q];
        for(int i=0; i<n; i++)
            scanf("%d",nn+i);

        for(int i=0; i<q; i++)
            scanf("%d",qq+i);

        sort(nn,nn+n);

        bin_search(n,q,nn,qq);
    }
    return 0;
}
