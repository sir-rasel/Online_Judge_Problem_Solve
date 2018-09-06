#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    while(scanf("%d",&num) and num){
        map<vector<int>,int>m;
        int maxx = 0;
        for(int i=0;i<num;i++){
            vector<int>v;
            for(int j=0;j<5;j++){
                int n;
                scanf("%d",&n);
                v.push_back(n);
            }
            sort(v.begin(),v.end());
            m[v]++;
            if(m[v]>maxx) maxx = m[v];
        }
        int res = 0;
        for(auto it=m.begin();it!=m.end();it++){
            if(maxx==it->second) res+=it->second;
        }
        printf("%d\n",res);
    }
    return 0;
}
