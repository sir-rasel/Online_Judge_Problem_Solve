#include<bits/stdc++.h>
using namespace std;

bool check(string a,string b){
    bool flag=false;
    for(int i=0;i<b.size()-a.size()+1 and !flag;i++){
        int j=0;
        for(j=0;j<a.size();j++){
            if(b[i+j]!=a[j]) break;
        }
        if(j==a.size()) flag=true;
    }
    return flag;
}

bool cmp(string a,string b){
    return a.size()<b.size();
}

int main(){
    int n;
    scanf("%d",&n);
    string s[n+2];
    vector<string>ans;
    for(int i=0;i<n;i++) cin>>s[i];
    sort(s,s+n,cmp);

    bool flag = true;
    for(int i=0;i<n-1 and flag;i++){
        if(check(s[i],s[i+1]))
            ans.push_back(s[i]);
        else flag=false;
    }

    if(flag){
        ans.push_back(s[n-1]);
        printf("YES\n");
        for(int i=0;i<n;i++) cout<<ans[i]<<endl;
    }
    else printf("NO\n");
    return 0;
}
