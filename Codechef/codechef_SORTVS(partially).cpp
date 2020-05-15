#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int ans,n,m;
vector<int>arr,pos,temp;
vector<pii>robot;
map<pii,bool>check;

void init(){
    arr.resize(n+5);
    temp.resize(n+5);
    pos.resize(n+5);
    robot.resize(m);
    check.clear();
    ans = INT_MAX;
}

void positioning(){
    for(int i=1;i<=n;i++)
        pos[temp[i]]=i;
}

void solve(){
    int swapNum = 0;
    for(int i=1; i<=n; i++){
        if(pos[temp[i]]==temp[i]) continue;
        int p = pos[temp[i]];
        int pp = pos[i];

        pos[temp[p]]=pp;
        pos[temp[pp]]=p;
        swap(temp[p],temp[pp]);

        if(p>pp) swap(p,pp);
        if(check.count({p,pp})==0) swapNum++;
    }
    ans = min(ans,swapNum);
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&n,&m);
        init();

        for(int i=1;i<=n;i++)
            scanf("%d",&arr[i]);

        int c=0;
        for(int i=0;i<m;i++){
            int x,y;
            scanf("%d %d",&x,&y);
            if(x>y) swap(x,y);
            if(check.count({x,y})==0) robot[c++]={x,y};
            check[{x,y}]=true;
        }
        robot.resize(c);
        m = c;

        for(int i=0;i<(1<<m);i++){
            bitset<20>choice(i);

            temp = arr;
            for(int j=0;j<20;j++){
                if(choice[j])
                    swap(temp[robot[j].first],temp[robot[j].second]);
            }
            positioning();

            solve();
        }

        printf("%d\n",ans);
    }
    return 0;
}
