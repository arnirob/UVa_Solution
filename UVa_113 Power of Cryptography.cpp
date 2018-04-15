#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, y;
    while(scanf("%lf %lf",&x,&y) != EOF)
    {
        printf("%.0lf\n",pow(y,(1/x)));
    }
    return 0;
}
