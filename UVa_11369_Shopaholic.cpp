#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int ks;
        scanf("%d",&ks);
        int arr[ks+5];
        for(int i=0;i<ks;i++)
            scanf("%d",arr+i);

        sort(arr,arr+ks,greater<int>());
        int sum=0,t=0;
        for(int i=0;i<ks;i++)
        {
            t++;
            if(t==3)
            {
                sum+=arr[i];
                t=0;
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}
