#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string ch = "QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./`1234567890-=";
    char ch[50]= {81,87,69,82,84,89,85,73,79,80,91,93,92,65,
                  83,68,70,71,72,74,75,76,59,39,90,88,67,
                  86,66,78,77,44,46,47,96,49,50,51,52,53,54   /// ASCII value;
                  ,55,56,57,48,45,61
                 };
    char c[5000];
    while(gets(c))
    {
        int len = strlen(c);
        for(int j=0; j<len; j++)
        {
            if(c[j] != ' ')
            {
                for(int i=1; i<50; i++)
                {
                    if(ch[i] == c[j])
                    {
                        printf("%c",ch[i-1]);
                    }
                }
            }
            else printf("%c",c[j]);
        }
        puts("");
    }
    return 0;
}

