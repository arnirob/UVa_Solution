#include<bits/stdc++.h>
using namespace std;
int main()
{
    int person,budget,hotel,weeks;
    while(scanf("%d %d %d %d",&person, &budget, &hotel, &weeks) != EOF)
    {
        int total_cost=INT_MAX;
        while(hotel--)
        {
            int cost,n=weeks;
            scanf("%d",&cost);
            while(n--)
            {
                int x;
                scanf("%d",&x);
                if(x>=person) if((cost*person)<total_cost) total_cost=cost*person;
            }
        }
        total_cost<budget ? printf("%d\n",total_cost) : printf("stay home\n");
    }
    return 0;
}
