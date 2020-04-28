#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MAX=2e5+7,MOD=2019;
int main (){
    string s;
    cin>>s;
    int n = s.size();
    vector<int>digits(n);
    for(int i=0;i<n;i++) digits[i]=s[i]-'0';
    reverse(digits.begin(),digits.end());

    map<int,int>cnt;
    cnt[0]=1;
    int res=0;
    ll curr = 0;
    ll power=1;

    for(auto x:digits){
        curr = (curr)%MOD + (x*power)%MOD;
        curr%=MOD;
        res+=cnt[curr];
        cnt[curr]++;
        power*=10;
        power%=MOD;
    }

    cout<<res<<endl;
    return 0;
}
