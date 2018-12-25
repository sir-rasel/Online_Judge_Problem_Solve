#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c;
    cin>>a>>b>>c;
    map<char,int>order;
    pair<int,char>m[5];

    if(a[1]=='>') order[a[0]]++,order[a[2]]--;
    else order[a[0]]--,order[a[2]]++;

    if(b[1]=='>') order[b[0]]++,order[b[2]]--;
    else order[b[0]]--,order[b[2]]++;

    if(c[1]=='>') order[c[0]]++,order[c[2]]--;
    else order[c[0]]--,order[c[2]]++;

    bool impossible=false;
    vector<char>res;
    if(order['A']==order['B'] or order['A']==order['C'] or order['B']==order['C']) impossible=true;
    else{
        m[0].first=order['A'];
        m[0].second='A';
        m[1].first=order['B'];
        m[1].second='B';
        m[2].first=order['C'];
        m[2].second='C';
        sort(m,m+3);
    }
    if(impossible) printf("Impossible");
    else for(int i=0;i<3;i++) printf("%c",m[i].second);
    printf("\n");
    return 0;
}
