#include<bits/stdc++.h>
using namespace std;

vector< string > v;
int rw,clm,cmd;

bool dir_arr( int i, int j )
{
    return ( i>=0 && i<rw && j>=0 && j<clm && v[i][j] != '#');
}

int main()
{
    while(scanf("%d %d %d",&rw,&clm,&cmd),rw|clm|cmd )
    {
        string s;
        char ch;
        int f=1,strt_rw,strt_clm;
        for(int j=0; j<rw; j++)
        {
            getchar();
            cin>>s;
            if(f)
            {
                for(int i=0; i<clm; i++)
                {
                    if(s[i]=='N' || s[i]=='S' || s[i]=='L' || s[i]=='O')
                    {
                        strt_rw=j;
                        strt_clm=i;
                        ch=s[i];
                        f=0;
                    }
                }
            }
            v.push_back(s);
        }
        string cmnd;
        cin>>cmnd;
        int mov,cunt=0;
        char arr[]= {'N','L','S','O'};
        for(int i=0; i<4; i++)
            if(arr[i] == ch) mov=i;
        for(int i=0; i<cmd; i++)
        {
            if(cmnd[i]=='F')
            {
                if(ch=='N' && dir_arr(strt_rw-1,strt_clm))
                {
                    strt_rw--;
                    if(v[strt_rw][strt_clm]=='*')
                    {
                        cunt++;
                        v[strt_rw][strt_clm]='.';
                    }
                }
                else if(ch=='O' && dir_arr(strt_rw,strt_clm-1))
                {
                    strt_clm--;
                    if(v[strt_rw][strt_clm]=='*')
                    {
                        cunt++;
                        v[strt_rw][strt_clm]='.';
                    }
                }
                else if(ch=='S' && dir_arr(strt_rw+1,strt_clm))
                {
                    strt_rw++;
                    if(v[strt_rw][strt_clm]=='*')
                    {
                        cunt++;
                        v[strt_rw][strt_clm]='.';
                    }
                }
                else if(ch=='L' && dir_arr(strt_rw,strt_clm+1))
                {
                    strt_clm++;
                    if(v[strt_rw][strt_clm]=='*')
                    {
                        cunt++;
                        v[strt_rw][strt_clm]='.';
                    }
                }
            }
            else if(cmnd[i]=='D')
            {
                mov++;
                if(mov>3) mov=0;
                ch=arr[mov];
            }
            else if(cmnd[i]=='E')
            {
                mov--;
                if(mov<0) mov=3;
                ch=arr[mov];
            }
        }
        cout<<cunt<<endl;
        v.clear();
    }
    return 0;
}


