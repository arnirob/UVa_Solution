#include<bits/stdc++.h>
using namespace std;

long rvc(long n)
{
	long num=0;
	while(n)
	{
		num*=10;
		num+=(n%10);
		n/=10;
	}
	return num;
}

int main()
{
	int tc;
    scanf("%d",&tc);
	while(tc--)
	{
		long num1,num2;
		scanf("%ld",&num1);
		num2=rvc(num1);
		int cunt=0;
		while (num1!=num2)
		{
			num1+=num2;
			num2=rvc(num1);
			++cunt;
		}
		printf("%d %ld\n",cunt,num1);
	}
}
