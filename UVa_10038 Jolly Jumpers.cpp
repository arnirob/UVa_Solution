#include<bits/stdc++.h>
using namespace std;

int arr[3005];
bitset<3005> ck;

int main()
{
//    #ifndef ONLINE_JUDGE
//    freopen("in.txt", "r", stdin);
//#endif // ONLINE_JUDGE
    int n;
    while(scanf("%d",&n) != EOF)
    {
        for(int i=0; i<n; i++)
            scanf("%d",arr+i);
        int f=1;
        for(int i=0; i<(n-1); i++)
        {
            int c=abs(arr[i]-arr[i+1]);
            ck[c]=1;
        }
        for(int i=1;i<n;i++)
        {
            if(!ck[i])
            {
                printf("Not jolly\n");
                f=0;
                break;
            }
        }
        if(f) printf("Jolly\n");
        ck.reset();
    }
    return 0;
}
