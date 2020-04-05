#include<bits/stdc++.h>
using namespace std;

char ans[1005];

struct node{
    pair<int,int>interval;
    int idx;
    bool operator<(node a){
        if(interval==a.interval){
            return idx<a.idx;
        }
        return interval<a.interval;
    }
};

bool checkValid(vector<int>v,node sch[],char c){
    bool valid = true;
    int finish=0,start;
    for (int i = 0; i < v.size(); i++){
        int idx = v[i];
        start = sch[idx].interval.first;
        valid = valid && finish <= start;
        ans[sch[idx].idx] = c;
        finish = sch[idx].interval.second;
    }
    return valid;
}

int main() {
    int test,cs=1;
    scanf("%d",&test);

    while(test--) {
        int n;
        scanf("%d",&n);
        node schedule[n+5];
        for (int i = 0; i < n; ++i) {
            scanf("%d %d",&schedule[i].interval.first,&schedule[i].interval.second);
            schedule[i].idx=i;
        }
        sort(schedule,schedule+n);

        vector<int>timing(1500,0);
        for(int i=0;i<n;i++){
            timing[schedule[i].interval.first]++;
            timing[schedule[i].interval.second]--;
        }

        int minPeople=0,sum=0;
        for(int i=0;i<1500;i++){
            sum+=timing[i];
            minPeople = max(minPeople,sum);
        }

        printf("Case #%d: ",cs++);
        if(minPeople>2) printf("IMPOSSIBLE\n");
        else{
            bool valid;
            for (int i = 0; i < 1 << n; ++i) {
                vector<int> c, j;
                for (int k = 0; k < n; ++k) {
                    if (i&(1<<k)) c.push_back(k);
                    else j.push_back(k);
                }

                valid = checkValid(c,schedule,'C');
                valid &= checkValid(j,schedule,'J');
                if (valid) break;
            }

            if (valid)
                for (int i = 0; i < n; ++i)
                    printf("%c",ans[i]);
            else printf("IMPOSSIBLE");
            printf("\n");
        }
    }
    return 0;
}
