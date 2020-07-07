#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,string> pis;

bool comp(pis a,pis b){
    if(a.first==b.first)
        return a.second<b.second;
    return a.first>b.first;
}

int main(){
    int n;
    scanf("%d",&n);
    vector<pis> li;
    while(n--){
        string s;
        int val;
        cin>>s>>val;
        li.push_back({val,s});
    }
    sort(li.begin(),li.end(),comp);

    for(auto it: li) cout<<it.second<< " " <<it.first<<endl;
    return 0;
}
