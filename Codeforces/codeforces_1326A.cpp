#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
const int mx = 100005;
int ans [mx];

void preCal(){
    ans[0]=2;
    int temp = 3;
    for(int i=1;i<mx;i++) {
        ans[i]=temp;
        if(temp==3) temp = 9;
        else temp = 3;
    }
}

int main() {
    preCal();
	int test;
	scanf("%d",&test);
	while(test--){
        int n;
        scanf("%d",&n);
        if(n==1) printf("-1\n");
        else {
            for(int i=0;i<n;i++) {
                if(i+1==n) printf("%d\n",ans[i]);
                else printf("%d",ans[i]);
            }
        }
	}
	return 0;
}
