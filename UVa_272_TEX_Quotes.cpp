#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    bool f=1;
    while(getline(cin,st))
    {

        for(int i=0; i<st.length(); i++)
        {
            if(st[i]==34)
            {
                if(f)
                {
                    printf("``");
                    f=0;
                }
                else
                {
                    printf("''");
                    f=1;
                }
            }
            else printf("%c",st[i]);
        }
        puts("");
    }
    return 0;
}
