#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1e6+10;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        if(n==1 or n==2) printf("%d\n",1);
        else{
            int ans = ceil(n/2.0);
            printf("%d\n",ans);
        }
    }

    return 0;
}
