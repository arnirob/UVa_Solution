#include<bits/stdc++.h>
using namespace std;
int main()
{
    long ks;
    double price;
    scanf("%ld",&ks);
    while(ks--)
    {
        char text[10000],x[200];
        double price=0;
        long val,n[200];
        scanf("%ld\n",&val);
        for(long i=0; i<val; i++)
            scanf("%c %ld\n",&x[i],&n[i]);

        long line;
        scanf("%ld\n",&line);
        for(long k=0; k<line; k++)
        {
            gets(text);
            long len=strlen(text);
            for(long i=0; i<val; i++)
            {
                for(long j=0; j<len; j++)
                {
                    if(x[i]==text[j])price+=n[i];
                }
            }
        }
        printf("%.2lf$\n",price/100);

    }
    return 0;
}


