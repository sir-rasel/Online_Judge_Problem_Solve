#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,i;
    vector<int>v;
    cin>>n>>k;
    while(n--){
        int num;
        cin>>num;
        v.push_back(num);
    }
    for(i=0;i<v.size();i++){
        if(v[i]<v[k-1] or v[i]<=0) break;
    }
    cout<<i<<endl;
    return 0;
}
