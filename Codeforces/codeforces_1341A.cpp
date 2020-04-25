#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,a,b,c,d;
        scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
        int i = (a-b), j = (a+b);
        int l = (c-d), h = (c+d);

        bool flag = false;

        if((i*n)<=h and (j*n)>=l) flag = true;

        if(flag) printf("Yes\n");
        else printf("No\n");
    }
	return 0;
}
