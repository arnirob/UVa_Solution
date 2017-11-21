#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ks;
    scanf("%d", &ks);
    while (ks--)
    {
        long num;
        scanf("%ld", &num);
        num = abs(((num * 63 + 7492) * 5 - 498));
        num=num/10;
        printf("%ld\n", num%10);
    }

    return 0;
}
