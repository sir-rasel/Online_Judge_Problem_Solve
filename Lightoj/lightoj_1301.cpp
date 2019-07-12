#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        map<int,int>schedule;
        for(int i=0;i<n;i++){
            int s,e;
            scanf("%d %d",&s,&e);
            schedule[s]++;
            schedule[e+1]--;
        }
        int ans=0,temp=0;
        for(auto x:schedule){
            temp+=x.second;
            ans = max(ans,temp);
        }
        printf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}
