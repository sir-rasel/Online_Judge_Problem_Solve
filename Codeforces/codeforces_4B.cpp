#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

struct data{
    int first,second;
}sch[35];

int main(){
    int d,sum;
    scanf("%d %d",&d,&sum);
    int l=0,h=0;
    for(int i=0;i<d;i++) {
        scanf("%d %d",&sch[i].first,&sch[i].second);
        l+=sch[i].first;
        h+=sch[i].second;
    }

    if(sum>=l and sum<=h){
        printf("YES\n");
        for(int i=0;i<d;i++){
            int t = min(sch[i].first + sum - l, sch[i].second);
            printf((i + 1 < d ? "%d " : "%d\n"), t);
            sum -= (t - sch[i].first);
        }
    }
    else printf("NO\n");
    return 0;
}
