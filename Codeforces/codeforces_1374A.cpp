#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int maxx = 1e6+5;


int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int a,b,n;
        scanf("%d %d %d",&a,&b,&n);

        int r = (n-b)/a;
        r = a*r+b;

        printf("%d\n",r);
    }

    return 0;
}
