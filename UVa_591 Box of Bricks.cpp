#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc=0,n;
    while(scanf("%d",&n),n)
    {
        int arr[n+4],sum=0,mov=0;
        for(int i=0; i<n; i++)
            scanf("%d",arr+i),sum+=arr[i];
        sort(arr,arr+n,greater<int>());
        sum/=n;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>sum) mov+=(arr[i]-sum);
            else break;
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",++tc,mov);
    }
    return 0;
}
