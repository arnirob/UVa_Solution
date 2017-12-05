#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ks,total=0;
    scanf("%d",&ks);
    while(ks--)
    {
        string req;
        cin>>req;
        if(req=="donate")
        {
            int tk;
            scanf("%d",&tk);
            total+=tk;
        }
        else
            printf("%d\n",total);
    }
    return 0;
}
