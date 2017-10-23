#include<bits/stdc++.h>
using namespace std;
#define mx 1000

int prime[]= {0,1,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0};

void bk_trk(int *arr,int idx,int n,int *ans,bool *tkn)
{
    if(idx==n && prime[1+ans[n-1]])
    {
        for(int i=0; i<n; i++)
        {
            if(i==n-1) printf("%d\n",ans[i]);
            else printf("%d ",ans[i]);
        }
        return;
    }
    for(int i=1; i<n; i++)
    {
        if(!(tkn[i]))
        {
            tkn[i]=true;
            int sum=ans[idx-1]+arr[i];
            if(prime[sum])
            {
                ans[idx]=arr[i];
                bk_trk(arr,idx+1,n,ans,tkn);
            }
               tkn[i]=false;
        }
    }
}

int main()
{
    int n,ab=0;
    while(scanf("%d",&n)!=EOF)
    {
        ab++;
        if(ab>1) printf("\n");
        printf("Case %d:\n",ab);
        int arr[n];
        int ans[n]={1};
        bool tkn[n]={1};
        for(int i=0; i<n; i++)
        {
            arr[i]=i+1;
        }
        bk_trk(arr,1,n,ans,tkn);
    }
    return 0;
}
