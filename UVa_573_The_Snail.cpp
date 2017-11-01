#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,u,d,f;
    while((scanf("%lf %lf %lf %lf",&h,&u,&d,&f)),h||u||d||f)
    {
        double fk=(u*f)/100.0;
        double climb=u,cl=u;
        int day=1;
        int fl=0;
        while(climb<=h)
        {
            climb-=d;
            if(climb<0.0)
            {
                fl=1;
                break;
            }
            cl-=fk;
            if(cl>0.0) climb+=cl;
            day++;
        }
        if(fl)
            printf("failure on day %d\n",day);
        else
            printf("success on day %d\n",day);
    }
    return 0;
}

//input:

//2 2 2 20
//8 6 5 30
//97 56 3 10
//56 3 1 5
//85 26 19 10
//59 17 13 11
//97 73 23 17
//0 0 0 0

//output:

//failure on day 2
//failure on day 3
//success on day 2
//failure on day 28
//failure on day 7
//failure on day 6
//success on day 2
