#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;

int main(){
    int test;
    scanf("%d",&test);

    while(test--){
        unsigned int n,m;
        char c;
        cin>>n>>m>>c;

        bitset<16>a(n);

        if(c=='L'){
            int ans = 0,temp=1;
            for(int i=16-m;i<16;i++){
                int t = a[i];
                ans+=(temp*t);
                temp*=2;
            }
            for(int i=0;i<16-m;i++){
                int t = a[i];
                ans+=(temp*t);
                temp*=2;
            }
            cout<<ans<<endl;
        }
        else{
            int ans = 0,temp=1;
            for(int i=m;i<16;i++){
                int t = a[i];
                ans+=(temp*t);
                temp*=2;
            }
            for(int i=0;i<m;i++){
                int t = a[i];
                ans+=(temp*t);
                temp*=2;
            }
            cout<<ans<<endl;
        }
    }

	return 0;
}
