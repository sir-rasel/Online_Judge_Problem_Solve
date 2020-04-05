#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

struct node{
    int s,e;
    int idx;
    bool operator<(node a){
        if(s==a.s)
            return e<a.e;
        return s<a.s;
    }
};

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        node schedule[n+5];
        vector<int> peopleNeed(1500,0);

        for(int i=0;i<n;i++) {
            scanf("%d %d",&schedule[i].s,&schedule[i].e);
            schedule[i].idx=i;
        }

        sort(schedule,schedule+n);
        for(int i=0;i<n;i++) {
            peopleNeed[schedule[i].s]++;
            peopleNeed[schedule[i].e]--;
        }

        int minPeopleNeed = 0,sum=0;
        for(int i=0;i<1500;i++){
            sum+=peopleNeed[i];
            minPeopleNeed = max(minPeopleNeed,sum);
        }

        printf("Case #%d: ",cs++);
        if(minPeopleNeed>2) printf("IMPOSSIBLE\n");
        else{
            vector<int>order(n+5,0);

            int last = 0;
            for(int i=0;i<n;i++){
                if(schedule[i].s>=last){
                    order[schedule[i].idx]=1;
                    last = schedule[i].e;
                }
            }

            last = 0;
            for(int i=0;i<n;i++){
                if(schedule[i].s>=last and order[schedule[i].idx]==0){
                    order[schedule[i].idx]=2;
                    last = schedule[i].e;
                }
            }

            for(int i=0;i<n;i++){
                if(order[i]==1) printf("C");
                else printf("J");
            }
            printf("\n");
        }
    }
    return 0;
}
