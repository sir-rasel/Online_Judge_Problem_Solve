#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 2e7;
const double eps = 1e-4;

int main(){
    int n;
    scanf("%d",&n);

    string s;
    cin>>s;

    set<int>c,o,d,e;
    for(int i=0;i<n;i++){
        if(s[i]=='c') c.insert(i);
        else if(s[i]=='o') o.insert(i);
        else if(s[i]=='d') d.insert(i);
        else if(s[i]=='e') e.insert(i);
    }

    int ans = min(c.size(),min(o.size(),min(d.size(),e.size())));
    int counter=0;
    for(auto it: c){
        bool flag = true;
        int val = it;

        auto Opos = o.lower_bound(val);
        if(Opos==o.end()) flag = false;
        else val = *Opos;

        auto Dpos = d.lower_bound(val);
        if(Dpos==d.end()) flag = false;
        else val = *Dpos;

        auto Epos = e.lower_bound(val);
        if(Epos==e.end()) flag = false;

        if(flag) counter++;
    }

    printf("%d\n",min(counter,ans));
    return 0;
}
