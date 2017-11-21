#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int m,n;
    int x,y;
    while((scanf("%d",&t)),t)
    {
        scanf("%d %d",&m,&n);
        while(t--)
        {
            scanf("%d %d",&x,&y);

            if(x==m || y==n)
                printf("divisa\n");

            else if(x>=0 && y>=0)
            {
                if(m<x && n<y) printf("NE\n");
                else if(m>x && n<y) printf("NO\n");
                else if(m>x && n>y) printf("SO\n");
                else if(m<x && n>y) printf("SE\n");
            }

            else if(x<=0 && y<=0)
            {
                if(m<x && n<y) printf("NE\n");
                else if(m>x && n<y) printf("NO\n");
                else if(m>x && n>y) printf("SO\n");
                else if(m<x && n>y) printf("SE\n");
            }

            else if(x>=0 && y<=0)
            {
                if(m<x && n<y) printf("NE\n");
                else if(m>x && n<y) printf("NO\n");
                else if(m>x && n>y) printf("SO\n");
                else if(m<x && n>y) printf("SE\n");
            }

            else if(x<=0 && y>=0)
            {
                if(m<x && n<y) printf("NE\n");
                else if(m>x && n<y) printf("NO\n");
                else if(m>x && n>y) printf("SO\n");
                else if(m<x && n>y) printf("SE\n");
            }

        }
    }

    return 0;
}

