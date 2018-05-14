#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(scanf("%lld",&n))
    {
        if(n<0) return 0;
        cout<<((n*(n+1))/2)+1<<endl;
    }
    return 0;
}
