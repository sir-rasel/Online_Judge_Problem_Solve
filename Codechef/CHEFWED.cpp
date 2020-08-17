#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

ll sol1(ll a1[],ll n,ll k){
	vector<ll>start,finish,a;
	for(int i=0;i<n;i++)
		a.push_back(a1[i]);

        map<ll,ll>count;
        start.push_back(0);
        for(ll i=0;i<n;i++){
            count[a[i]]++;
            if(count[a[i]]>1){
                finish.push_back(i-1);
                start.push_back(i);
                count.clear();
                count[a[i]]++;
            }
        }
        finish.push_back(n-1);

        ll m = start.size();
        ll ans = m*k;
        for(ll i = 0;i<m;i++){
            for(ll j=i;j<m;j++){
                ll p = start[i];
                ll q = finish[j];

                count.clear();
                for(ll K=p;K<=q;K++)
                    count[a[K]]++;

                ll temp = 0;
                for(auto it: count){
                    if(it.second>1)
                        temp += it.second;
                }

                ans = min(ans, ((i)*k) + (k+temp) + ((m-j-1)*k) );
            }
        }
    return ans;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,i,num,cnt,sum=0;
        cin>>n>>k;
        ll a[n],ans[n]={0},ans1[n]={0},dekho=0,dekho1=0;
        map<ll,ll>mp,mp1;
        for(i=0;i<n;i++){
            cin>>a[i];
            mp1[a[i]]++;
            if(mp1[a[i]]==2){
                dekho+=2;
                ans[i]=dekho;
            }
            else if(mp1[a[i]]>2){
                dekho+=1;
                ans[i]=dekho;
            }
            else ans[i]=dekho;
        }
        if(k==1){
            cnt=k;
            for(auto it=mp1.begin();it!=mp1.end();it++){
                if(it->second>1)
                    sum+=it->second;
            }
            ll koyta_gelo=0,p=0;
            for(i=0;i<n;i++){
                if(mp[a[i]]!=0){
                    cnt+=k;
                    mp.clear();
                    if(koyta_gelo==1)
                        p++;
                    koyta_gelo=0;
                }
                koyta_gelo++;
                mp[a[i]]++;
            }
            cnt=min(cnt,cnt-(p*k)+(p*2));
            cout<<min(cnt,sum+k)<<endl;
            continue;
        }
        for(i=n-1;i>=0;i--){
            mp[a[i]]++;
            if(mp[a[i]]==2){
                dekho1+=2;
                ans1[i]=dekho1;
            }
            else if(mp[a[i]]>2){
                dekho1+=1;
                ans1[i]=dekho1;
            }
            else ans1[i]=dekho1;
        }
        cnt=1e10;
        for(auto it=mp1.begin();it!=mp1.end();it++){
            if(it->second>1)
                sum+=it->second;
        }
        ll koyta_gelo=0,p=0;
        for(i=0;i<n-1;i++){
            cnt=min((ans[i]+ans1[i+1])+(k*2),cnt);
        }
        cout<<min(cnt,min((sum+k),sol1(a,n,k)))<<endl;
    }
    return 0;
}
