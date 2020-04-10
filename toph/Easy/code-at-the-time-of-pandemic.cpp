#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	int test,cs=1;
	scanf("%d",&test);
	while(test--){
        int n;
        scanf("%d",&n);
        ll neww=0,total=1;
        printf("Case %d:\n",cs++);
        for(int i=1;i<=n;i++){
            printf("Day = %d, New = %lld, Total = %lld\n",i,neww,total);
            neww = total*2;
            total+=neww;
        }
	}
	return 0;
}
