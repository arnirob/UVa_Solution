#include<bits/stdc++.h>
using namespace std;

int dx[]= {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[]= {-1, 0, 1, -1, 1, -1, 0, 1};

char arr[103][103];
int m,n;
bool posOk(int x, int y)
{
    return (x>=0 && x<m && y>=0 && y<n && arr[x][y] == '*' );
}

int main()
{
//#ifndef ONLINE_JUDGE
//    freopen("in.txt", "r", stdin);
//#endif // ONLINE_JUDGE
    int ks=0;
    while(scanf("%d %d",&m,&n),m||n)
    {
        memset(arr,'\0',sizeof arr);
        for(int i=0; i<m; i++)
            scanf("%s",arr[i]);
        if(ks) puts("");
        printf("Field #%d:\n",++ks);
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                int c=0;
                for(int p=0; p<8; p++)
                {
                    int movX= i+dx[p];
                    int movY= j+dy[p];
                    if(posOk(movX,movY)) c++;
                }

                if(arr[i][j]=='*') printf("*");
                else cout<<c;
            }
            puts("");
        }
    }
    return 0;
}
