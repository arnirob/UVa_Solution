#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ks,i=0;
    scanf("%d",&ks);
    while(ks--)
    {
        int dy1,dy2,mnt1,mnt2,yr1,yr2;
        getchar();
        scanf("%d/%d/%d",&dy1,&mnt1,&yr1);
        scanf("%d/%d/%d",&dy2,&mnt2,&yr2);

        if(yr1<yr2) printf("Case #%d: Invalid birth date\n",++i);
        else if(yr1>yr2)
        {
            if(dy1<dy2) mnt1--;
            if(mnt1<mnt2) yr1--;
            if(yr1-yr2>130) printf("Case #%d: Check birth date\n",++i);
            else printf("Case #%d: %d\n",++i,yr1-yr2);
        }
        else
        {
            if(mnt1==mnt2)
            {
                if(dy1<dy2) printf("Case #%d: Invalid birth date\n",++i);
                else printf("Case #%d: 0\n",++i);
            }
            else if(mnt1<mnt2) printf("Case #%d: Invalid birth date\n",++i);
            else printf("Case #%d: 0\n",++i);
        }
    }
    return 0;
}
