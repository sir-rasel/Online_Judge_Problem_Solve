#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	int test;
	scanf("%d",&test);

	while (test--) {
		int n;
		scanf("%d",&n);

        if(n<4) printf("-1\n");
        else{
            int temp = n;
            if((n&1)==0 ) temp--;
            for(int i=temp;i>0;i-=2)
                printf("%d ",i);
            printf("4 2 ");
            for(int i=6;i<=n;i+=2)
                printf("%d ",i);
            printf("\n");
        }
	}
	return 0;
}
