#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b1,g1,c1,b2,g2,c2,b3,g3,c3;
    while(scanf(" %d %d %d %d %d %d %d %d %d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3) != EOF)
    {
        int mov=INT_MAX;
        string seq;
        if((b2+b3+c1+c3+g1+g2)<mov)
        {
            mov=b2+b3+c1+c3+g1+g2;
            seq="BCG";
        }
        if((b2+b3+g1+g3+c1+c2)<mov)
        {
            mov=b2+b3+g1+g3+c1+c2;
            seq="BGC";
        }
        if((c2+c3+b1+b3+g1+g2)<mov)
        {
            mov=c2+c3+b1+b3+g1+g2;
            seq="CBG";
        }
        if((c2+c3+g1+g3+b1+b2)<mov)
        {
            mov=c2+c3+g1+g3+b1+b2;
            seq="CGB";
        }
        if((g2+g3+b1+b3+c1+c2)<mov)
        {
            mov=g2+g3+b1+b3+c1+c2;
            seq="GBC";
        }
        if((g2+g3+c1+c3+b1+b2)<mov)
        {
            mov=g2+g3+c1+c3+b1+b2;
            seq="GCB";
        }
        cout<<seq<<" "<<mov<<endl;
    }
    return 0;
}
