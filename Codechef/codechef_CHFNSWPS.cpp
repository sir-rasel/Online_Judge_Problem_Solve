#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1e8;
const double eps = 1e-4;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int test,cs=1;
    cin>>test;
    while(test--){
        int n,num;
        ll ans = 0;
        cin>>n;

        map<int,int>f,s;
        set<int>ss;
        for(int i=0;i<n;i++){
            cin>>num;
            f[num]++;
            ss.insert(num);
        }
        for(int i=0;i<n;i++) {
            cin>>num;
            s[num]++;
            ss.insert(num);
        }

        bool flag = true;
        for(auto it:ss)
            if( (f[it]+s[it])&1 )
                flag = false;

        if(!flag) ans = -1;
        else{
            multiset<int>a,b;
            for(auto it:ss){
                if(f[it] > s[it]){
                    int t = (f[it]-s[it])/2;
                    while(t--) a.insert(it);
                }
                else if(s[it] > f[it]){
                    int t = (s[it]-f[it])/2;
                    while(t--) b.insert(it);
                }
            }

            int small = min(f.begin()->first,s.begin()->first);
            int sm = small;

            while(a.size() and b.size()){
                while(a.size() and b.size()){
                    if(*a.begin() == small){
                        a.erase(a.begin());
                        auto i = b.end();
                        i--;
                        b.erase(i);

                        ans+=small;
                    }
                    else if(*b.begin() == small){
                        b.erase(b.begin());
                        auto i = a.end();
                        i--;
                        a.erase(i);

                        ans+=small;
                    }
                    else {
                        small = sm;
                        break;
                    }
                }

                if(a.empty() or b.empty()) break;

                else if(*a.begin() <= (2*small-1)){
                    small = min(*a.begin(),*b.begin());
                }
                else if(*b.begin() <= (2*small-1)){
                    small = min(*a.begin(),*b.begin());
                }
                else{
                    ans+=2*small;

                    auto i = a.end();
                    i--;
                    a.erase(i);
                    auto j = b.end();
                    j--;
                    b.erase(j);
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
