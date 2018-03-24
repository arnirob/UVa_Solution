#include<bits/stdc++.h>
#define mx 101
using namespace std;

vector <vector <int>> graph;
int arr[mx],cunt=0;
bitset < 101 > trk;

void dfs(int s)
{
    int sz=graph[s].size();
    for(int i=0; i<sz; i++)
    {
        int x=graph[s][i];
        if(!trk[x])
        {
            cunt++;
            trk[x] = true;
            dfs(x);
        }
    }
}

int main()
{
//#ifndef ONLINE_JUDGE
//    freopen("in.txt", "r", stdin);
//#endif // ONLINE_JUDGE
//    int n,ts;
    while(scanf("%d",&n),n)
    {
        graph.assign(n+1, vector <int> ());
        int a,b;
        while(scanf("%d",&a),a)
        {
            while(scanf("%d",&b),b)
                graph[a].push_back(b);
        }
        scanf("%d",&ts);
        int f;
        for(int i=0; i<ts; i++)
        {
            scanf("%d",&f);
            cunt=0;
            trk.reset();
            dfs(f);
            printf("%d",n-cunt);
            for(int j=1; j<=n; j++) if(!trk[j])printf(" %d",j);
            printf("\n");
        }
    }
    return 0;
}
