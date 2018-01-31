#include<bits/stdc++.h>
#define VISITED 1
#define UNVISITED 0
#define MX 50

using namespace std;

vector<int> graph[MX];
bitset<101> trk;

void dfs(int s)
{
    trk[s]=VISITED;
    for(int i=0; i<graph[s].size(); i++)
    {
        int n=graph[s][i];
        if(trk[n]==UNVISITED) dfs(n);
    }
}

int main()
{
    int ks;
    scanf("\n%d\n\n",&ks);
    while(ks--)
    {
        for(int i=0; i<MX; i++) graph[i].clear();
        trk.reset();
        string str;
        getline(cin, str);
        int mx = str[0] - '0' - 16;
        while(getline(cin, str) && str != "")
        {
            int x = str[0] - '0' - 16, y = str[1] - '0' - 16;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        int cunt=0;
        for(int i=1; i<=mx; i++)
        {
            if(!trk[i])
            {
                cunt++,dfs(i);
            }
        }
        cout<<cunt<<endl;
        if(ks) puts("");
    }
    return 0;
}

