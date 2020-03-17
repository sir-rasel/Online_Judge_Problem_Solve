#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long u,v;
	scanf("%I64d%I64d",&u,&v);
	if (u%2!=v%2 || u>v)
	{
		printf("-1");
		return 0;
	}
	if (u==v)
	{
		if (!u)
		printf("0");
		else
		printf("1\n%I64d",u);
		return 0;
	}
	long long x=(v-u)/2;
	if (u&x)
	printf("3\n%I64d %I64d %I64d",u,x,x);
	else
	printf("2\n%I64d %I64d",(u^x),x);
}
