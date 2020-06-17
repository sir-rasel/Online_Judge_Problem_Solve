#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,k;
        scanf("%d %d",&n,&k);
        int ans = 0;
        while(n--){
            int num;
            scanf("%d",&num);
            if(num>k) ans+=num-k;
        }
        printf("%d\n",ans);
    }
    return 0;
}
