#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[100];
    double speed;
    int hr,mint,sec;
    double ttl_dist=0,ttl_speed=0,ttl_time;
    while(gets(ch))
    {
        sscanf(ch,"%d:%d:%d %lf",&hr,&mint,&sec,&speed);
        int length=strlen(ch);
        double cur_time=(hr*3600)+(mint*60)+sec;
        ttl_dist+=(cur_time-ttl_time)*ttl_speed;
        ttl_time=cur_time;
        if(length==8)
            printf("%02d:%02d:%02d %.2lf km\n",hr,mint,sec,ttl_dist/3600);
        else
            ttl_speed=speed;
    }
}
