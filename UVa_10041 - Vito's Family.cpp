#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ks,r;
    scanf("%d",&ks);
    while(ks--)
    {
        scanf("%d",&r);
        int arr[r+3];
        for(int i=0; i<r; i++) scanf("%d",arr+i);
        sort(arr,arr+r);
        int mid=arr[r/2];
        int ttl=0;
        for(int i=0; i<r; i++)
            ttl+=abs(mid-arr[i]);

        printf("%d\n",ttl);
    }
    return 0;
}
