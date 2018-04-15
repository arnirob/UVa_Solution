#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,sum=0;
        scanf("%d",&n);
        int arr[n+4];
        for(int i=0; i<n; i++)
            scanf("%d",arr+i), sum+=arr[i];
        double avg= (double)sum/(double)n;
        int cunt=0;
        for(int i=0; i<n; i++)
            if(arr[i]>avg) cunt++;
        printf("%.3lf%%\n",((double)cunt*100.00)/(double)n);
    }

    return 0;
}
