#include<bits/stdc++.h>
using namespace std;

long long int fact(int gu)
{
    if (gu >= 1)
        return gu*fact(gu-1);
    else
        return 1;
}

int main()
{
    int ks;
    scanf("%d",&ks);
    while(ks--)
    {
        string str;
        cin>>str;
        int n=str.size()-1;
        long long num;
        scanf("%lld",&num);
        for(int i=0;i<=n;i++)
        {
            sort(str.begin() + i, str.end());
            if(!num) break;
            long long gu=fact(n-i);
            int hagu=i+num/gu;
            swap(str[i],str[hagu]);
            num%=gu;
        }
        cout<<str<<endl;
    }
    return 0;
}
