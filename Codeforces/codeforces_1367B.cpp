#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        vector<int>a(n);
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(i%2 == a[i]%2) continue;
            if(i%2==0 and a[i]%2==1) odd++;
            else even++;
        }
        if(odd != even) printf("-1\n");
        else printf("%d\n",odd);
    }
    return 0;
}
