#include<bits/stdc++.h>
using namespace std;
int main()
{
    long a,b;
    while(scanf("%ld %ld",&a,&b),a||b)
    {
        int crry=0,x=0;
        while(a>0 || b>0)
        {
            int x=(a%10+b%10+x)/10;
            crry+=x;
            a/=10, b/=10;
        }
        if(!crry)printf("No carry operation.\n");
        else if(crry==1)printf("1 carry operation.\n");
        else printf("%d carry operations.\n",crry);
    }
    return 0;
}
