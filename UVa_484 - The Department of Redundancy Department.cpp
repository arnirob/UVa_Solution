#include<bits/stdc++.h>
using namespace std;
vector<int> v;
map<int, int> mp;

int main()
{
    int n;
    while(scanf("%d",&n)!= EOF)
    {
        if(mp[n]) mp[n]++;
        else
        {
            mp[n]++;
            v.push_back(n);
        }
    }
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" "<<mp[v[i]]<<endl;
    return 0;
}

