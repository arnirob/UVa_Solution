#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(scanf("%lld",&n),n)
    {
        long long x= sqrt(n);
        if(x*x==n) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
