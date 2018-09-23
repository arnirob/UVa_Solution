#include<bits/stdc++.h>
using namespace std;

int div(int n)
{
    int sum=0;
    for(int i=1; i<=n/2; i++)
        if(!(n%i)) sum+=i;

    if(sum==n) return 1;
    if(sum<n) return 2;
    if(sum>n) return 3;
}

int main()
{
    int n;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n))
    {
        if(!n)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        int a=log10(n)+1;
        if(a==1) printf("    %d",n);
        else if(a==2) printf("   %d",n);
        else if(a==3) printf("  %d",n);
        else if(a==4) printf(" %d",n);
        else if(a==5) printf("%d",n);

        int x=div(n);
        if(x==1) printf("  PERFECT\n");
        else if(x==2) printf("  DEFICIENT\n");
        else printf("  ABUNDANT\n");
    }
    return 0;
}
