#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","rt",stdin);
    #endif

    string n;
    printf("         NAME                     SOUNDEX CODE\n");
    while(cin>>n)
    {
        printf("         ");
        int len=n.size();
        int a=1;
        int arr[4];
        int g=0;
        memset(arr,0,sizeof arr);
        for(int i=a;i<len;i++)
        {
            if(g==3) break;
            if(n[i]=='A'||n[i]=='E'||n[i]=='I'||n[i]=='O'||n[i]=='U'||n[i]=='Y'||n[i]=='W'||n[i]=='H')
                continue;

            if(n[i]=='B'||n[i]=='P'||n[i]=='F'||n[i]=='V')
            {
                if((n[i-1]=='B'||n[i-1]=='P'||n[i-1]=='F'||n[i-1]=='V'))
                    continue;
                else
                    arr[g++]=1;
            }
            else if(n[i]=='C'||n[i]=='S'||n[i]=='K'||n[i]=='G'||n[i]=='J'||n[i]=='Q'||n[i]=='X'||n[i]=='Z')
            {
                if(n[i-1]=='C'||n[i-1]=='S'||n[i-1]=='K'||n[i-1]=='G'||n[i-1]=='J'||n[i-1]=='Q'||n[i-1]=='X'||n[i-1]=='Z')
                    continue;
                else
                    arr[g++]=2;
            }
            else if(n[i]=='D'||n[i]=='T')
            {
                if(n[i-1]=='D'||n[i-1]=='T')
                    continue;
                else
                    arr[g++]=3;
            }
            else if(n[i]=='L')
            {
                if(n[i-1]=='L')
                    continue;
                else
                    arr[g++]=4;
            }
            else if(n[i]=='M'||n[i]=='N')
            {
                if(n[i-1]=='M'||n[i-1]=='N')
                    continue;
                else
                    arr[g++]=5;
            }
            else if(n[i]=='R')
            {
                if(n[i-1]=='R')
                    continue;
                else
                    arr[g++]=6;
            }
        }

        cout << n ;
        for(int i=0; i<25-len; i++){
            printf(" ");
        }
        printf("%c",n[0]);
        for(int x=0; x<3; x++) printf("%d",arr[x]);
        puts("");

    }
//    for(int i=0; i<9; i++)printf(" ");
    printf("                   END OF OUTPUT\n");


    return 0;
}
