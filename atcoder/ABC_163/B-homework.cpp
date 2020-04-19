#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a = 0;
    for(int i=0;i<m;i++){
        int num;
        scanf("%d",&num);
        a+=num;
    }
    if(a>n) printf("-1\n");
    else printf("%d\n",n-a);

	return 0;
}
