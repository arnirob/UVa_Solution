#include<bits/stdc++.h>
#define MAX 999999
using namespace std;

bool prime[MAX];
int lrg,sml,n;

void primeNum()
{
    for(int i=3; i<=MAX; i+=2)
    {
        bool f=true;
        for(int j=3; j*j<=i; j+=2)
        {
            if(!(i%j))
            {
                f=false;
                break;
            }
        }
        if(f) prime[i]= true;
    }
}

void Lrg(int x)
{
    for(int i=x; i>=3; i--)
    {
        if(prime[i]==true)
        {
            lrg=i;
            break;
        }
    }
}

void Sml(int x)
{
    for(int i=x; i<=n; i++)
    {
        if(prime[i]== true)
        {
            sml=i;
            break;
        }
    }
}

void print()
{
    while(1)
    {
        if(lrg+sml==n)
        {
            printf("%d = %d + %d\n",n,sml,lrg);
            break;
        }
        else if(lrg+sml>n) Lrg(lrg-1);
        else if(lrg+sml<n) Sml(sml+1);
    }
}

int main()
{
    primeNum();
    while(scanf("%d",&n),n)
    {
        lrg=0,sml=0;
        Lrg(n);
        Sml(3);
        print();
    }
    return 0;
}
