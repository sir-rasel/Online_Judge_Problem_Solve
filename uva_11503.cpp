#include<bits/stdc++.h>
using namespace std;

void makeSet(int parent[],int rankOfParent[],int n){
    for(int i=0;i<=n;i++){
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
            printf("%d\n",rankOfParent[v]);
        }
        else {
            parent[v]=u;
            rankOfParent[u]+=rankOfParent[v];
            printf("%d\n",rankOfParent[u]);
        }
    }
    else printf("%d\n",rankOfParent[u]);
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int f;
        scanf("%d",&f);
        map<string,int>chain;
        int parent[100005];
        int rankOfParent[100005];

        makeSet(parent,rankOfParent,min(2*f,100000));

        int temp=0;
        for(int i=0;i<f;i++) {
            string a,b;
            cin>>a>>b;

            int friend1 = chain[a];
            int friend2 = chain[b];

            if(friend1==0) chain[a]=++temp,friend1=temp;
            if(friend2==0) chain[b]=++temp,friend2=temp;

            unionTwoSet(parent,rankOfParent,friend1,friend2);
        }
    }
    return 0;
}
