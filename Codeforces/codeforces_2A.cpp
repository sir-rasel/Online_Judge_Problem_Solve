#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int n;
    cin>>n;
    map<string,ll>score;
    ll maxx=0;
    string ans;
    vector<pair<string,int> >li;
    for(int i=0;i<n;i++){
        string s;
        int point;
        cin>>s>>point;
        score[s]+=point;
        li.push_back({s,point});
    }
    for(auto it:score)
        if(it.second>maxx)
            maxx=it.second;

    map<string,ll>check;
    for(int i=0;i<n;i++){
        if( (check[li[i].first]+=li[i].second)>=maxx and score[li[i].first]==maxx){
            ans = li[i].first;
            break;
        }
    }
    cout<<ans<<endl;
    return  0;
}
