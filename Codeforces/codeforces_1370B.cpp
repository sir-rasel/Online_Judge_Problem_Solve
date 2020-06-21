#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);

        vector<int>odd,even;
        for(int i=0;i<2*n;i++){
            int num;
            scanf("%d",&num);

            if(num&1) odd.push_back(i+1);
            else even.push_back(i+1);
        }

        vector<pii>ans;
        int count = (n-1);
        for(int i=0;i<((int)even.size()-1) and count;i+=2){
            ans.push_back({even[i],even[i+1]});
            count--;
        }
        for(int i=0;i<((int)odd.size()-1) and count;i+=2){
            ans.push_back({odd[i],odd[i+1]});
            count--;
        }

        for(int i=0;i<ans.size();i++)
            printf("%d %d\n",ans[i].first,ans[i].second);
    }
    return 0;
}
