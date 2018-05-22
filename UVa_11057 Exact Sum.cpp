#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        int arr[n];
        for(int i=0; i<n; i++) scanf("%d",arr+i);
        sort(arr,arr+n, greater<int>());
        int m,sml,lrg,sub=INT_MAX;
        scanf("%d",&m);
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]<m)
                {
                    if(arr[i]+arr[j]==m && arr[i]-arr[j]<sub)
                    {
                        sml=arr[j];
                        lrg=arr[i];
                        break;
                    }
                }
                else break;
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n",sml,lrg);
        puts("");
    }
    return 0;
}
