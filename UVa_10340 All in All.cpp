#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    while(cin>>s>>t)
    {
        int s_sz=s.size(),a=0;
        int t_sz=t.size();
        for(int i=0; i<t_sz && a<s_sz; i++)
            if(t[i]==s[a]) a++;

        if(a==s_sz) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
