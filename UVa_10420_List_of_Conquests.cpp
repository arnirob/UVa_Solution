#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ks;
    vector<string>v;
    map<string,int>mp;
    scanf("%d",&ks);
    while(ks--)
    {
        string cntry,name;
        cin>>cntry;
        getchar();
        getline(cin,name);
        if(mp[cntry])
        {
            mp[cntry]++;
        }
        else
        {
            mp[cntry]++;
            v.push_back(cntry);
        }

    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" "<<mp[v[i]]<<endl;

    return 0;
}
