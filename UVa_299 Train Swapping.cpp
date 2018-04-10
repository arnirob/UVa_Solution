#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ks;
    scanf("%d",&ks);
    while(ks--)
    {
        int len;
        scanf("%d",&len);
        int arr[len+4],cunter=0;
        for(int i=0; i<len; i++)
            scanf("%d",arr+i);
        for(int i=0; i<len; i++)
        {
            for(int j=i; j<len; j++)
            {
                if(arr[i]>arr[j]) swap(arr[i],arr[j]),cunter++;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",cunter);
    }
}
