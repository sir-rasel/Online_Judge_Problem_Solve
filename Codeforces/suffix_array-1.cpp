#include<bits/stdc++.h>
using namespace std;

vector<int>suffixArray(string s){
    int n = s.size();
    vector<int> p(n),v(n);
    {

        vector<pair<char,int> >a(n);
        for(int i=0;i<n;i++) a[i] = {s[i],i};
        sort(a.begin(),a.end());

        for(int i=0;i<n;i++) p[i] = a[i].second;

        v[p[0]] = 0;
        for(int i=1;i<n;i++){
            if(a[i].first==a[i-1].first)
                v[p[i]] = v[p[i-1]];
            else v[p[i]] = v[p[i-1]]+1;
        }
    }

    int k = 0;
    while((1<<k)<n){
        vector<pair<pair<int,int>,int> > a(n);
        for(int i=0;i<n;i++)
            a[i] = {{v[i],v[(i+(1<<k))%n]},i};
        sort(a.begin(),a.end());

        for(int i=0;i<n;i++) p[i] = a[i].second;

        v[p[0]] = 0;
        for(int i=1;i<n;i++){
            if(a[i].first==a[i-1].first)
                v[p[i]] = v[p[i-1]];
            else v[p[i]] = v[p[i-1]]+1;
        }

        k++;
    }

    return p;
}

void printArray(vector<int> a){
    for(int i=0;i<a.size();i++){
        if(i+1==(int)a.size()) printf("%d\n",a[i]);
        else printf("%d ",a[i]);
    }
}

int main(){
    string s;
    cin>>s;
    s+='$';

    vector<int> ans = suffixArray(s);
    printArray(ans);

    return 0;
}
