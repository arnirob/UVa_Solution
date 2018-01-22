#include<bits/stdc++.h>
#define VISITED 1
#define UNVISITED 0
using namespace std;
vector<int> lst[101];
int tc,b;
char arr[100][100];
bitset < 101 > mark,a;

void stdr( int s )
{
    a[s] = VISITED;
//    cout<<s<<" ";
    int sz = lst[s].size();
    for( int i=0; i<sz; i++ )
    {
        int nn = lst[s][i];
        if( a[nn] == UNVISITED ) stdr( nn );
    }
}

void dfs( int s )
{
    if(s!=b) mark[s] = VISITED;
//    cout<<s<<" ";
    int sz = lst[s].size();
    for( int i=0; i<sz; i++ )
    {
        int nn = lst[s][i];
        if( mark[nn] == UNVISITED && s!=b ) dfs( nn );
    }
}

int main()
{
    scanf("%d",&tc);
    for(int w=1; w<=tc; w++)
    {
        int node;
        scanf("%d",&node);
        for(int i=0; i<node; i++)
        {
            for(int j=0; j<node; j++)
            {
                int x;
                scanf("%d",&x);
                if(x) lst[i].push_back(j);
            }
        }
        stdr(0);
        for(b=0; b<node; b++)
        {
            dfs(0);
            for(int j=0; j<node; j++)
            {
                if(!(mark[j]) && a[j]) arr[b][j]='Y';
                else arr[b][j]='N';
            }
            mark.reset();
        }
        printf("Case %d:\n",w);
        int g=(2*node)+1;
        for(int v=0; v<g; v++)
        {
            if(v==0 || v==g-1) printf("+");
                else printf("-");
        }
        puts("");

        for(int i=0; i<node; i++)
        {
            printf("|");
            for(int j=0; j<node; j++)
            {
                cout<<arr[i][j]<<"|";
            }
            puts("");
            for(int v=0; v<g; v++)
            {
                if(v==0 || v==g-1) printf("+");
                    else printf("-");
            }
            puts("");
        }

        for(int i=0; i<node; i++)
        {
            lst[i].clear();
            for(int j=0; j<node; j++)
                arr[i][j]='\0';
        }
        a.reset();
    }
    return 0;
}
