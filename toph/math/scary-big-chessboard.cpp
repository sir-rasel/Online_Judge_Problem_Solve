#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int t,c,bm,wm,q,n,x,y;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld",&n,&q);
		int i=0,chk=1;
		while(q--){
			scanf("%lld %lld %lld",&x,&y,&c);
			if(i==0){
				if(c==2){
					bm = (x+y)%2;
					wm = 1-bm;
				}
				else{
					wm = (x+y)%2;
					bm = 1-wm;
				}
			}
			else{
				if(c==1) {if((x+y)%2!=wm) chk=0;}
				else if ((x+y)%2!=bm) chk=0;
			}
			i++;
		}
		if(chk) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
