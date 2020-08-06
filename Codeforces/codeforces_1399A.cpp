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
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a.begin(),a.end());

        bool flag = true;
        for(int i=1;i<n;i++){
            if(abs(a[i]-a[i-1])>1) {
                flag = false;
                break;
            }
        }

        if(flag) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
