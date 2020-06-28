#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int Max = 1e5+1;
const int r = Max/2+1;

vector<vector<int> > tree;
vector<bool>mark(Max+10,false);

void generate_tree(){
    for(int i=1;i<=r;i+=2){
        if(!mark[i]){
            vector<int>arr;
            for(int j=i;j<=Max;j=(2*j+1)){
                mark[j]=true;
                arr.push_back(j);
            }
            tree.push_back(arr);
        }
    }
}

int main(){
    generate_tree();
    int test;
    scanf("%d",&test);

    for(int i=1;i<=test;i++){
        int n = i;
//        scanf("%d",&n);

        ll ans = 0;
        for(int i=0;i<tree.size();i++){
            auto it = lower_bound(tree[i].begin(),tree[i].end(),n);
            if(it==tree[i].end()) continue;
            else if(*it>n) it--;

            ll len = it - tree[i].begin()+1;

            ll sum = (len*(len+1))/2;
            ans += (len*len) - sum;
        }
        printf("%d -> %lld\n",n,ans);
    }
    return 0;
}
