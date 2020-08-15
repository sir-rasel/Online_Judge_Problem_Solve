#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        string s;
        cin>>n>>s;

        int sum = 0;
        ll ans = 0;
        map<int,int>check;

        check[0]++;
        for(int i=0;i<n;i++){
            sum += (s[i]-'0');
            ans += check[sum-(i+1)];

            check[sum - (i+1)]++;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
