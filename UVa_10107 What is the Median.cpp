#include<bits/stdc++.h>
#define MAX 10005
using namespace std;
int main()
{
    int arr[MAX],n,i=0;
    while(scanf("%d",&n)!=EOF)
    {
        arr[++i]=n;
        sort(arr,arr+i+1);
        if(i&1) cout<<arr[(i/2)+1]<<endl;
        else cout<<(arr[i/2]+arr[(i/2)+1])/2<<endl;
    }
    return 0;
}
