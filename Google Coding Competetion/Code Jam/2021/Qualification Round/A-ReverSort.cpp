#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        vector<int>num(n);
        for(int i=0;i<n;i++){
            scanf("%d",&num[i]);
        }

        int ans = 0;
        for(int i=0;i<n-1;i++){
            int k = i;
            for(int j=i;j<n;j++){
                if(num[j] == (i+1) ){
                    k = j;
                    break;
                }
            }

            ans += (k-i+1);
            reverse(num.begin()+i, num.begin()+k+1);
        }

        printf("Case #%d: %d\n",cs++,ans);
    }
    return 0;
}
