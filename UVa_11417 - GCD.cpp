#include<bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2)
{
    if (n2 != 0)
        return gcd(n2, n1%n2);
    else
        return n1;
}

int main()
{
    int n;
    while(scanf("%d",&n),n)
    {
        int ttl=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=i+1; j<=n; j++)
                ttl+=gcd(i,j);
        }
        cout<<ttl<<endl;
    }
    return 0;
}

