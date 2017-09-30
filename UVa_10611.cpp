#include<bits/stdc++.h>
using namespace std;

void chk(int feml,int fml[],int luc,int lucu[])
{
    int i;
    for(i=0; i<luc; i++)
    {
        int md;
        int low=0;
        int high=feml-1;
        int mid=low+(high-low)>>1;
        while(low<=high)
        {
            if(lucu[i]>fml[mid])
                low=mid+1;

            else if(lucu[i]<fml[mid])
                high=mid-1;

            else
            {
                if(mid-1>=0 && mid+1<feml)
                {
                    printf("%d %d\n",fml[mid-1],fml[mid+1]);
                    break;
                }
                else if(mid-1<0)
                {
                    printf("X %d\n",fml[mid+1]);
                    break;
                }
                else if(mid+1>=feml)
                {
                    printf("%d X\n",fml[mid-1]);
                    break;
                }
            }
            md=mid;
            mid=low+(high-low)/2;
        }
        if(low>high)
        {
            if(lucu[i]>fml[feml-1])
                printf("%d X\n",fml[feml-1]);

            else if(lucu[i]<fml[0])
                printf("X %d\n",fml[0]);

            else
            {
                if(fml[md]>lucu[i])
                    printf("%d %d\n",fml[md-1],fml[md]);

                else
                    printf("%d %d\n",fml[md],fml[md+1]);
            }
        }
    }
}

int main()
{
    int feml;
    scanf("%d",&feml);
    int fml[feml];
    for(int i=0; i<feml; i++)
        scanf("%d",fml+i);

    sort(fml,fml+feml);
    int q=unique(fml,fml+feml)-fml;

    int luc;
    scanf("%d",&luc);
    int lucu[luc];
    for(int i=0; i<luc; i++)
        scanf("%d",lucu+i);

    chk(q,fml,luc,lucu);
    return 0;
}
