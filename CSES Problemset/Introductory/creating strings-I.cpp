#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());

    vector<string>ans;
    do{
        ans.push_back(s);
    }while(next_permutation(s.begin(),s.end()));

    cout<<ans.size()<<endl;
    for(auto it:ans) cout<<it<<endl;

    return 0;
}
