#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        stack<char> ch;
        string s;
        getline(cin,s);
        int len = s.length();
        bool f=true;
        for (int i=0; i<len; i++)
        {
            if (s[i] == '(' || s[i] == '[') ch.push(s[i]);
            else
            {
                if(s[i] == ')')
                {
                    if(ch.empty() || ch.top() != '(')
                    {
                        f=false;
                        break;
                    }
                    ch.pop();
                }
                else
                {
                    if(ch.empty() || ch.top() != '[')
                    {
                        f=false;
                        break;
                    }
                    ch.pop();
                }
            }
        }
        if(ch.empty() && f) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
