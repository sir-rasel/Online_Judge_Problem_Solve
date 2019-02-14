#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    long long int dollarcost;
    cin>>k>>n>>w;
    dollarcost=((w*(w+1))/2)*k;
    dollarcost=dollarcost-n;
    if(dollarcost<0) cout<<0<<endl;
    else cout<<dollarcost<<endl;
    return 0;
}
