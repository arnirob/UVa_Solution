#include<bits/stdc++.h>
using namespace std;
#define mx 1000

int arr[mx];
int n,t;
vector<int> v;
map<vector<int>, bool > mp;

void bk_track(int idx,int strt,int sum)
{
    if(sum==n)
    {
        if(mp[v]) return;
        mp[v]=true;
        for(int i=0;i<idx;i++)
        {
            if(i==idx-1) printf("%d",v[i]);
            else printf("%d+",v[i]);
        }
        puts("");
        return;
    }
    for(int i=strt;i<t;i++)
    {
            int tsum=sum+arr[i];
            if(tsum<=n)
            {
                v.push_back(arr[i]);
                bk_track(idx+1,i+1,tsum);
                v.pop_back();
            }
    }
}

int main()
{
//    freopen("in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);
    while(scanf("%d %d",&n,&t),n||t)
    {
        mp.clear();
        v.clear();
        for(int i=0;i<=t;i++)
        {
            arr[i]=0;
        }
        for(int i=0;i<t;i++)
            scanf("%d",arr+i);

        printf("Sums of %d:\n",n);
        bk_track(0,0,0);
        if(mp.size()==0) printf("NONE\n");
    }

    return 0;
}
