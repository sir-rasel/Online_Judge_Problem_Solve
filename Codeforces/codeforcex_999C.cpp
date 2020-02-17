#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int n,k;
    string s;
    cin >> n >> k >> s;
    vector<int>d(27,0);
    for(int i=0;i<s.length();i++) d[s[i]-'a']++;
    for(int i=0;i<27;i++){
        if(k==0) break;
        else{
            if(d[i]>=k) {
                d[i]-=k;
                k=0;
            }
            else{
                k-=d[i];
                d[i]=0;
            }
        }
    }
    string ans = "";
    for(int i=s.length()-1;i>=0;i--){
        if(d[s[i]-'a']>0) {
            d[s[i]-'a']--;
            ans.push_back(s[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}
