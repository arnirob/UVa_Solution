#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b,c;
    while((scanf("%d %d %d %d",&x,&a,&b,&c)),x||a||b||c)
    {
        int sum=0;
        sum+=(x-a)>0?x-a:x-a+40;
        sum+=(b-a)>0?b-a:b-a+40;
        sum+=(b-c)>0?b-c:b-c+40;
        printf("%d\n",(sum*9)+1080);
    }
    return 0;
}
