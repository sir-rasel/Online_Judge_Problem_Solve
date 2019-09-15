#include<bits/stdc++.h>
using namespace std;

int depth=0;
void RecCount(int s,int t,int i){
	depth++;
	printf("%d %d\n",s,t);
	if(s==t) return;
	int mid=(s+t)/2;
	if(mid<i) RecCount(mid+1,t,i);
	else RecCount(s,mid,i);
}

int main(){
	int test;
	scanf("%d",&test);
	while(test--){
        int s,t,i;
		scanf("%d %d %d",&s,&t,&i);
		if(i<s || i>t) printf("-1\n");
		else{
			RecCount(s,t,i);
			printf("%d\n",depth);
		}
		depth=0;
	}
	return 0;
}
