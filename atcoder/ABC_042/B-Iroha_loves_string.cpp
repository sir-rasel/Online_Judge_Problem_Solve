#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l;
    scanf("%d %d",&n,&l);
    vector<string>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(auto x:v) cout<<x;
    printf("\n");
    return 0;
}
