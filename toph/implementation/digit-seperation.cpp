#include <bits/stdc++.h>
using namespace std;

int main(){
	char str[1002];
	int sum;
	while (scanf("%s",str)!=EOF){
		sum=0;
		for (int i=0;str[i]!='\0';i++) sum+=str[i]-'0';
		printf("%d\n", sum);
	}
	return 0;
}
