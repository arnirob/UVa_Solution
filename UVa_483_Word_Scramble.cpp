#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        int gg=0;
        for(int i=0; i<=str.length(); i++)
        {
            if(isspace(str[i]))
            {
                for(int j=i-1; j>=gg; j--)
                    printf("%c",str[j]);

                printf(" ");

                gg=i+1;
            }
        }
        int v=str.length();
        while(v--)
        {
            if(isspace(str[v])) break;
             printf("%c",str[v]);
        }
        puts("");
    }
    return 0;
}
