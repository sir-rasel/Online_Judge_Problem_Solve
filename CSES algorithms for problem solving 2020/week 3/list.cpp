#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,string> pis;

int main(){
    int n;
    scanf("%d",&n);
    priority_queue<ll,vector<ll>, greater<ll> >s;
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        s.push(num);
    }

    while(s.size()!=1){
        ll fi = s.top();
        s.pop();
        ll se = s.top();
        s.pop();

        s.push(fi+se);
        printf("%lld ",fi+se);
    }

    printf("\n");
    return 0;
}
