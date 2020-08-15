#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        string s;
        cin>>s;
        s.push_back('0');

        vector<int>arr;
        int len = 0;
        for(auto ch:s){
            if(ch == '0'){
                if(len>0) arr.push_back(len);
                len = 0;
            }
            else len++;
        }

        sort(arr.begin(),arr.end(),greater<int>());
        ll ans = 0;
        for(int i=0;i<arr.size();i+=2)
            ans += arr[i];

        printf("%lld\n",ans);
    }
    return 0;
}
