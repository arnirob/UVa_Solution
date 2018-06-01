#include<bits/stdc++.h>
#define mx 999999
using namespace std;
bool trk[mx];

bool rvc(int n)
{
    int c=0,x=n;
    while(x)
    {
        int a=x%10;
        x/=10;
        c=(c*10)+a;
    }
    if(c==n) return false;
    else if(trk[c]) return true;
    return false;
}

int main()
{
    trk[2]=true;
    for(int i=3; i<mx; i+=2)
    {
        bool f=true;
        for(int j=3; j*j<=i; j++)
            if(!(i%j))
            {
                 f=false;
                 break;
            }
        if(f) trk[i]=true;
    }
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(trk[n])
        {
            if(rvc(n))
                printf("%d is emirp.\n",n);
            else
                printf("%d is prime.\n",n);
        }
        else
            printf("%d is not prime.\n",n);
    }
    return 0;
}

