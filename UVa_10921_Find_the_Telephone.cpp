#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[27] = "22233344455566677778889999";
    string str;
    while(cin>>str)
    {
        int i;
        for(i = 0; str[i]; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
                printf("%c", s[str[i]-'A']);
            else
                printf("%c", str[i]);
        }
        puts("");
    }
    return 0;
}
