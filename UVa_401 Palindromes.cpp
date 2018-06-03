#include<bits/stdc++.h>
using namespace std;

char arr[]= {'A','H','I','M','O','T','U','V','W','X','Y','8','1'};

bool miror_ck(char ch)
{
    for(int i=0; i<13; i++)
        if(arr[i]==ch) return true;

    return false;
}

bool isOk(char ch1, char ch2)
{
    char j1[]={'3','J','S','Z'};
    char j2[]={'E','L','2','5'};

    if(ch1==ch2) return true;
    for(int i=0; i<4; i++)
    {
        if(j1[i]==ch1 && j2[i]==ch2) return true;
        else if(j2[i]==ch1 && j1[i]==ch2) return true;
    }
    return false;
}

int main()
{
    string str;
    while(cin>>str)
    {
        bool miror_char=true;
        int len=str.size();
        for(int i=0; i<len; i++)
            if(! miror_ck(str[i]))
            {
                miror_char= false;
                break;
            }
        if(miror_char)
        {
            int mx=len;
            bool ok=true;
            for(int i=0; i<len/2; i++)
            {
                if(str[i]!=str[--mx])
                {
                    cout<<str<<" -- is not a palindrome."<<endl;
                    ok=false;
                    break;
                }
            }
            if(ok) cout<<str<<" -- is a mirrored palindrome."<<endl;
        }
        else
        {
            bool ck_mirorStr= false;
            int mxx=len;
            for(int i=0; i<len/2; i++)
            {
                if(str[i]!=str[--mxx])
                {
                    ck_mirorStr= true;
                    break;
                }
            }
            if(ck_mirorStr)
            {
                int mx=len;
                bool mirorStr= true;
                for(int i=0; i<len/2; i++)
                {
                    --mx;
                    if(!isOk(str[i],str[mx]))
                    {
                        mirorStr=false;
                        break;
                    }
                }
                if(mirorStr) cout<<str<<" -- is a mirrored string."<<endl;
                else cout<<str<<" -- is not a palindrome."<<endl;
            }
            else cout<<str<<" -- is a regular palindrome."<<endl;
        }
        puts("");
    }
    return 0;
}
