#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    vector<int>res;
    map<int,bool>seq;
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        seq[num]=true;
    }
    res.push_back(seq.begin()->first);

    bool flag=true;
    for(auto it: seq){
        for(int j=0;j<31 and flag;j++){
            int left = it.first - (1<<j);
            int right = it.first + (1<<j);

            if(seq.count(left) and seq.count(right) and res.size()<3) res = {left,it.first,right},flag=false;
            if(seq.count(left) and res.size()<2) res = {left,it.first};
            if(seq.count(right) and res.size()<2) res = {it.first,right};
        }
        if(!flag) break;
    }
    printf("%d\n",res.size());
    for(auto it:res) printf("%d ",it);
    printf("\n");
    return 0;
}
