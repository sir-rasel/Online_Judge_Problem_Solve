#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    string s;
    scanf("%d %d",&n,&m);
    vector<string>pol,ene;
    for(int i=0;i<n;i++){
        cin>>s;
        pol.push_back(s);
    }
    for(int i=0;i<m;i++){
        cin>>s;
        ene.push_back(s);
    }

    sort(pol.begin(),pol.begin()+n);
    sort(ene.begin(),ene.begin()+m);

    int i=0,j=0,match=0;
    while(i<n and j<m){
        if(pol[i]==ene[j]){
            match++;
            i++;
            j++;
        }
        else if(pol[i]<ene[j]) i++;
        else j++;
    }
    n=n-match;
    m=m-match;

    if(n>m) printf("YES\n");
    else if(n==m){
        if(match%2==0) printf("NO\n");
        else printf("YES\n");
    }
    else printf("NO\n");
    return 0;
}
