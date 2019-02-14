#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    if (n < 3) printf("-1\n");
    else if (n % 2 == 0) cout<<(n*n/4-1)<< " "<<(n*n/4+1)<<endl;
    else cout<<(n*n)/2 <<" "<<(n*n)/2+1<<endl;
    return 0;
}
