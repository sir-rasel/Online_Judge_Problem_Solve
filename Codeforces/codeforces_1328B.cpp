#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
vector<ll>besides;
vector<ll>corner;
const ll mx = 100005;

void preCal(){
    ll gap=2,i=1;
    while(i<=(mx*(mx-1))/2){
        besides.push_back(i);
        i+=gap;
        gap++;
    }

    gap=2,i=2;
    while(i<=(mx*(mx-1))/2){
        corner.push_back(i);
        i+=gap;
        gap++;
    }
}

int main(){
    preCal();
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll n,k;
        scanf("%lld %lld",&n,&k);
        string ans = "";
        auto it = lower_bound(besides.begin(),besides.end(),k);
        if(it!=besides.end() and *it==k){
            int c = it-besides.begin();
            for(int i=0;i<n-c-2;i++) ans.push_back('a');
            ans.push_back('b');
            ans.push_back('b');
            for(int i=0;i<c;i++) ans.push_back('a');
        }
        else{
            auto it1 = lower_bound(corner.begin(),corner.end(),k);
            if(it1!=corner.end() and *it1==k){
                int c = it1-corner.begin()+1;
                for(int i=0;i<n-c-2;i++) ans.push_back('a');
                ans.push_back('b');
                for(int i=0;i<c;i++) ans.push_back('a');
                ans.push_back('b');
            }
            else{
                it1--;
                int c = it1-corner.begin()+1,t = k-*it1;
                for(int i=0;i<n-c-2;i++) ans.push_back('a');
                ans.push_back('b');
                for(int i=0;i<c-t;i++) ans.push_back('a');
                ans.push_back('b');
                for(int i=0;i<t;i++) ans.push_back('a');
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


// O(1) solution
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    ll t;
    cin>>t;
    while (t--) {
        ll n, k;
        cin>>n>>k;
        ll x = sqrt(k*2), y;
        while (x*(x+1)/2 > k) x--;
        ll tmp = x*(x+1)/2;
        if(tmp == k) {
            x++;
            y=x-1;
        }
        else {
            x+=2;
            y = k - tmp;
        }

        for(ll i=n; i>=1; i--) {
            if (i==x || i==y) {
                cout<<'b';
            }
            else cout<<'a';
        }
        cout<<endl;
    }
    return 0;
}
