#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    multiset<int>counter;
    for(int i=0;i<n;i++) {
        int it;
        scanf("%d",&it);
        counter.insert(it);
    }
    for(int i=0;i<m;i++){
        int it,ans;
        scanf("%d",&it);
        if(counter.empty()) ans = -1;
        else{
            auto idx = counter.lower_bound(it);

            if(idx==counter.end()) ans = -1;
            else {
                ans = *idx;
                counter.erase(idx);
            }
        }

        printf("%d ",ans);
    }
    printf("\n");
    return 0;
}
