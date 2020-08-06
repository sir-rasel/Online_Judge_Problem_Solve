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
        vector<ll>a(n);
        map<int,int>check;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            check[a[i]]++;
        }
        sort(a.begin(),a.end());

        int ans = 0;
        if(n == 1) ans = 0;
        else{
            int sum = a[n-1]+a[n-2];

            for(int i=2;i<=sum;i++){
                int counter = 0;
                map<int,int>c(check.begin(),check.end());
                for(int j=0;j<n;j++){
                    int t = a[j];
                    int rem = i - a[j];

                    if(c[t] == 0 or rem<=0 or c[rem] == 0) continue;
                    else if(t == rem and c[t]<2) continue;
                    else{
                        counter++;
                        c[t]--;
                        c[rem]--;
                    }
                }
                ans = max(ans,counter);
            }
        }
        printf("%d\n",ans);
    }

    return 0;
}
