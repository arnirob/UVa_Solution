#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[10];
        scanf("%s",s);
        if(strlen(s) > 3) printf("3\n");
        else
        {
            if(s[0] == 'o' && s[1] == 'n' && s[2] == 'e') printf("1\n");
            else if(s[0] == 'o' && s[1] == 'n') printf("1\n");
            else if(s[0] == 'o' && s[2] == 'e') printf("1\n");
            else if(s[1] == 'n' && s[2] == 'e') printf("1\n");
            else printf("2\n");
        }
    }
    return 0;
}
