#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<string,int> &a,const pair<string,int> &b)
{
    return a.second<b.second;
}
int main()
{
    int t,g=1;
    scanf("%d",&t);
    while(t--)
    {
        string st;
        int vl;
        vector < pair < string,int > > v;
        for(int i=0;i<10;i++)
        {
            cin>>st>>vl;
            v.push_back(make_pair(st,vl));
        }
        sort(v.begin(),v.end(),sortbysec);
        cout<<"Case #"<<g<<":"<<endl;
        for(int i=0;i<10;i++)
        {
            if(v[9].second==v[i].second)
            {
                cout<<v[i].first<<endl;
            }
        }
        g++;
    }
    return 0;
}
