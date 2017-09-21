#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int tt;
        scanf("%d",&tt);
        int arr[tt];
        for(int i=0;i<tt;i++)
        {
            scanf("%d",arr+i);
        }
        sort(arr,arr+tt);
        printf("%d\n",(arr[tt-1]-arr[0])*2);
    }

    return 0;
}
