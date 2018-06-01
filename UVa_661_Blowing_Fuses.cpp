#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c,ks=0;
    while(scanf("%d %d %d",&n,&m,&c),n||m||c){
        ks++;
        bool on_off[100];
        memset(on_off,0,sizeof on_off);
        int arr[n+10];
        for(int i=0; i<n; i++)
            scanf("%d",arr+i);
        int mx=0,sum=0,f=1;
        for(int i=0; i<m; i++){
            int of;
            scanf("%d",&of);
            if(f){
                if(!on_off[of-1]){
                    on_off[of-1]=1;
                    sum+=arr[of-1];
                    if(sum>c) f=0;
                    if(sum>mx) mx=sum; }
                else{
                    on_off[of-1]=0;
                    sum-=arr[of-1];
                }
            }
        }
        if(f) printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n",ks,mx);
        else printf("Sequence %d\nFuse was blown.\n",ks);
        memset(arr,0,sizeof arr);
        printf("\n");
    } return 0;
}
