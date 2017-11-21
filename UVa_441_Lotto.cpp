#include<bits/stdc++.h>

using namespace std;

void Combination(int N, int R, int *arr, int *ans, int idx, int start)
{
    if(idx == R)
    {
        int f=1;
        for(int i=1; i<6; i++)
        {
            if(!(ans[i-1]<ans[i]))
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            for(int i=0; i<6; i++)
            {
                if(i==5)
                    printf("%d\n",ans[i]);

                else
                    printf("%d ",ans[i]);
            }
        }
        return;
    }
    for(int i=start; i<N; i++)
    {
        ans[idx] = arr[i];
        Combination(N, R, arr, ans, idx+1, i+1);
        while(arr[i] == arr[i+1])i++;
    }
}

int main()
{
    int arr[1000], ans[1000];
    int N,ks,rf=0;
    while(scanf("%d",&ks),ks)
    {
        if(rf)
        {
            rf++;
            printf("\n");
        }
        for(int i=0; i<ks; i++)
            scanf("%d",arr+i);

        Combination(ks, 6, arr, ans, 0, 0);

        memset(arr, 0, sizeof(arr));
        memset(ans, 0, sizeof(ans));
    }
    return 0;
}
