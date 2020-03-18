#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int arr[26][100005];

void preCalculate(string s){
    for(int i=1;i<=s.size();i++){
        int t = s[i-1]-'a';
        for(int j=0;j<26;j++){
            if(j==t) arr[j][i]=arr[j][i-1]+1;
            else arr[j][i]=arr[j][i-1];
        }
    }
}

bool check(string s,ll mid){
    bool flag = true;
    for(int j=0;j<26;j++){
        for(ll i=1;i<=s.size()-mid+1;i++){
            if(arr[j][i+mid-1]-arr[j][i-1]) flag = true;
            else{
                flag = false;
                break;
            }
        }
        if(flag) return flag;
    }
    return flag;
}

ll binarySearch(string s,ll n){
    preCalculate(s);
    ll low = 1,high = (n/2)+1,ans;
    while(low<=high){
        ll mid = (low+high)/2;
        if(check(s,mid)){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    ll n = (ll)s.size();

    printf("%lld\n",binarySearch(s,n));
    return 0;
}
