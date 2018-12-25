#include<bits/stdc++.h>
using namespace std;

int maxRank;

void makeSet(int parent[],int rankOfParent[],int n){
    for(int i=0;i<n;i++){
        parent[i]=i;
        rankOfParent[i]=1;
    }
}

int findRepresentative(int parent[],int i){
    if(parent[i]==i) return i;
    else{
        int representative = findRepresentative(parent,parent[i]);
        parent[i]=representative;
        return representative;
    }
}

void unionTwoSet(int parent[],int rankOfParent[],int i,int j){
    int u = findRepresentative(parent,i);
    int v = findRepresentative(parent,j);
    if(u!=v){
        if(rankOfParent[u]<rankOfParent[v]){
            parent[u]=v;
            rankOfParent[v]+=rankOfParent[u];
            maxRank = max(maxRank,rankOfParent[v]);
        }
        else {
            parent[v]=u;
            rankOfParent[u]+=rankOfParent[v];
            maxRank = max(maxRank,rankOfParent[u]);
        }
    }
}

int main(){
    int n,r;
    while(scanf("%d %d",&n,&r)){
        if(n==0 and r==0) break;
        maxRank = 1;
        map<string,int>chain;
        int parent[n+5];
        int rankOfParent[n+5];
        for(int i=0;i<n;i++) {
            string s;
            cin>>s;
            chain[s]=i;
        }
        makeSet(parent,rankOfParent,n);
        for(int i=0;i<r;i++) {
            string a,b;
            cin>>a>>b;
            unionTwoSet(parent,rankOfParent,chain[a],chain[b]);
        }
        printf("%d\n",maxRank);
    }
    return 0;
}
