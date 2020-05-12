#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ll n,k;
        scanf("%lld %lld",&n,&k);

        vector<ll>ans;
        bool flag = false;
        ll temp = n;
        for(int i=0;i<k-1;i++){
            ans.push_back(1);
            temp--;
        }
        ans.push_back(temp);
        if(temp%2==1) flag = true;
        else{
            ans.clear();
            temp = n;
            for(int i=0;i<k-1;i++){
                ans.push_back(2);
                temp-=2;
            }
            ans.push_back(temp);
            if(temp<=0) flag = false;
            else if(temp%2==0) flag = true;
        }

         if(!flag) printf("NO\n");
         else{
            printf("YES\n");
            for(int i=0;i<ans.size();i++){
                if(i+1==ans.size()) printf("%d\n",ans[i]);
                else printf("%d ",ans[i]);
            }
         }
    }
    return 0;
}
