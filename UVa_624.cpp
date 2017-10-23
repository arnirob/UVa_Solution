#include<bits/stdc++.h>
using namespace std;

#define mx 1000

int mint,cd;
int arr[mx], track[mx], ans[mx], tkn[mx];
int finalsum,length=0;
bool flag;
vector < pair <int,int> > v;

void bk_Track(int idx,int strt,int sum)
{
    if(sum==mint)
    {
        finalsum=sum;
        length=idx;
        for(int i=0; i<idx; i++)
            ans[i]=track[i];

        flag=true;
        return;
    }
    if(sum>mint) return;
    if(sum>finalsum && sum<mint)
    {
        finalsum=sum;
        length=idx;
        for(int i=0; i<idx; i++)
            ans[i]=track[i];
    }

    for(int i=strt; i<cd; i++)
    {
        if(flag) return;
        if(!(tkn[i]))
        {
            int temp=sum+v[i].first;
            if(temp<=mint)
            {
                tkn[i]=1;
                track[idx]=v[i].second;
                bk_Track(idx+1,i+1,temp);
                tkn[i]=false;
            }
        }
    }
}

int main()
{
//    freopen("in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);

    std::ios_base::sync_with_stdio();
    cin.tie(NULL);

    while(scanf("%d %d",&mint,&cd)!=EOF)
    {
        for(int i=0;i<=cd;i++)
        {
            track[i]= 0;
            ans[i]= 0;
            tkn[i]= 0;
            arr[i]= 0;
        }

        finalsum=0;
        flag=false;
        length=0;
        int totalsum=0;

        for(int i=0; i<cd; i++)
        {
            scanf("%d",arr+i);
            totalsum+=arr[i];
            v.push_back(make_pair(arr[i],i));
        }
        sort(v.begin(),v.end());
        if(totalsum<=mint)
        {
            for(int i=0; i<cd; i++)
                printf("%d ",arr[i]);

            printf("sum:%d\n",totalsum);
            v.clear();
            continue;
        }

        bk_Track(0,0,0);
        sort(ans,ans+length);
        for(int i=0; i<length; i++)
            printf("%d ",arr[ans[i]]);

        printf("sum:%d\n",finalsum);
        v.clear();
    }
    return 0;
}
