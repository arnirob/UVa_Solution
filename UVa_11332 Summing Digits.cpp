#include<bits/stdc++.h>
using namespace std;

void sumOfDig(long n)
{
    int x=0;
    while(n>=10)
    {
        while(n)
        {
            x+=(n%10);
            n/=10;
        }
        n=x;
        x=0;
    }
    cout<<n<<endl;
}

int main()
{
    long n;
    while(scanf("%ld",&n),n)
        sumOfDig(n);
    return 0;
}
