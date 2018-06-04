#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(scanf("%lld",&n),n>-1)
    {
        int arr[10],i=0;
        if(n==0)
        {
            printf("0\n");
            continue;
        }
        while(n)
        {
            int x=n%3;
            arr[i++]=x;
            n/=3;
        }
        for(int j=i-1; j>=0; j--)
            printf("%d",arr[j]);
        puts("");
    }
    return 0;
}

