#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

struct node{
    char c;
    int idx;
};

bool compSmall(node a,node b){
    if(a.c==b.c) return a.idx<b.idx;
    return a.c<b.c;
}

bool compBig(node a,node b){
    if(a.c==b.c) return a.idx<b.idx;
    return a.c>b.c;
}

void solve(int n,string s){
    vector<node>small,big;
    for(int i=0; i<s.size(); i++)
    {
        small.push_back({s[i],i});
        big.push_back({s[i],i});
    }
    sort(small.begin(),small.end(),compSmall);
    sort(big.begin(),big.end(),compBig);

    string ans = "",temp="";
    ans+=small[0].c;
    ans+=big[0].c;
    int ansIdx = small[0].idx;
    for(int i=1; i<s.size(); i++)
    {
        temp+=small[i].c;
        temp+=big[i].c;
        if(temp<ans)
        {
            ans=temp;
            ansIdx = small[i].idx;
        }
        temp="";
    }
    ans = "";
    for(int i=ansIdx; i<n; i++) ans+=s[i];
    if( (n-ansIdx)%2==0 ) for(int i=0; i<ansIdx; i++) ans+=s[i];
    else for(int i=ansIdx-1; i>=0; i--) ans+=s[i];
    cout<<ans<<endl<<ansIdx+1<<endl;
}

void solution2(int n,string s){
    vector<pair<string,int> >arr;
    for(int i=0; i<n; i++)
    {
        arr.push_back({"",i});
        arr[i].first.insert(0,s,i,(n-i));
        if((n-i)%2==0)
        {
            arr[i].first.insert((n-i),s,0,i);
        }
        else
        {
            arr[i].first.insert((n-i),s,0,i);
            reverse(arr[i].first.begin()+(n-i),arr[i].first.begin()+(n-i)+i);
        }
    }

    sort(arr.begin(),arr.end());
    cout<<arr[0].first<<endl<<arr[0].second+1<<endl;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        string s;
        cin>>n>>s;
        solution2(n,s);
        //solve(n,s);
    }
    return 0;
}
