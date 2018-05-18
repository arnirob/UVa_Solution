#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ks,ampl,freq;
    scanf("%d",&ks);
    while(ks--)
    {
        scanf("%d\n%d",&ampl,&freq);
        while(freq--)
        {
            for(int i=1; i<=ampl; i++)
            {
                for(int j=1; j<=i; j++) cout<<i;
                puts("");
            }
            for(int i=ampl-1; i>=1; i--)
            {
                for(int j=1; j<=i; j++) cout<<i;
                puts("");
            }
            if(freq) puts("");
        }
        if(ks) puts("");
    }
    return 0;
}
