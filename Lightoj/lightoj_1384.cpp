#include <bits/stdc++.h>
using namespace std;

int n,m,cost;
const int maxx = 1000001;

struct network{
    int u,v,bandwidth,cost;
    network(){}
    network(int a, int b,int band,int c) {
        u=a;
        v=b;
        bandwidth=band;
        cost=c;
    }
    bool operator < (const network &p) const{
        if (cost == p.cost) return bandwidth > p.bandwidth;
        return cost < p.cost;
    }
};

bool check (vector<network> &point,int band){
    long long int totalCost=0;
    bool detect[n]={false};

    for(int i=0;i<point.size();i++){
        if(point[i].bandwidth<band) continue;
        if(!detect[point[i].u] or !detect[point[i].v]){
            totalCost+=point[i].cost;
            detect[point[i].u]=true;
            detect[point[i].v]=true;
        }
        if(totalCost>cost) return false;
    }
    for(int i=0;i<n;i++)
        if(!detect[i]) return false;
    return true;
}

int bs (vector<network> &point,int maxx){
    int low=0,high=maxx,ans=0;
    while(low<=high){
        int mid=(low+high) >> 1;
        if(check(point,mid)) {
            low=mid+1;
            ans=mid;
        }
        else high=mid-1;
    }
    if(check(point,ans)) return ans;
    else return -1;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d %d",&n,&m,&cost);
        vector<network> point(m);

        for(int i=0;i<m;i++)
            scanf("%d %d %d %d",&point[i].u,&point[i].v,&point[i].bandwidth,&point[i].cost);
        sort(point.begin(),point.end());

        int res = bs(point,maxx);
        printf("Case %d: ",cs++);
        if(res!=-1) printf("%d kbps\n",res);
        else printf("impossible\n");
    }
    return 0;
}
