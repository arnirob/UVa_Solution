#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hr,mnt;
    while(scanf("%d:%d",&hr,&mnt),hr||mnt)
    {
        double hr_angl=(double)hr*30+((double)mnt/60)*30;
        double mnt_angl=(double)mnt*6;
        double angle=abs(hr_angl-mnt_angl);
        printf("%.3f\n",angle>180? 360-angle : angle);
    }
    return 0;
}
