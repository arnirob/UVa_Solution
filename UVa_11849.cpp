#include<bits/stdc++.h>
using namespace std;
#define mx 100000001
bool arr[mx];
int xx[1000001];

int main(){
    int m,n;

    while(scanf("%d %d",&m,&n),m||n)
    {
        int jk;
        for(int i=0;i<m;i++)
        {
            scanf("%d",&jk);
            arr[jk]=true;
            xx[i]=jk;
        }

        int ji,c=0,i=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ji);
            if(arr[ji]) c++;
        }
        printf("%d\n",c);

        for(int i=0;i<m;i++)
            arr[xx[i]]=0;
    }
    return 0;
}
