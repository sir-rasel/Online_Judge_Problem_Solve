#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int arr[n+5];
    map<int,int>dup;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        dup[arr[i]]=i;
    }
    vector<int>idx;
    for(auto x:dup){
        idx.push_back(x.second);
    }
    sort(idx.begin(),idx.end());
    printf("%d\n",idx.size());
    for(int i=0;i<idx.size();i++){
        if(i+1==idx.size()) printf("%d\n",arr[idx[i]]);
        else printf("%d ",arr[idx[i]]);
    }
    return 0;
}
