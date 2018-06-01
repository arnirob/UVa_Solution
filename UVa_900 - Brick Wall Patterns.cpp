#include<bits/stdc++.h>
using namespace std;

long long fib(int n)
{
    if(n<2) return 1;
    return fib(n-2) + fib(n-1);
}

int main()
{
    int n;
    while(scanf("%d",&n),n)
    {
        cout<<fib(n)<<endl;
    }
    return 0;
}

