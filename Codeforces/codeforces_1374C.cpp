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
        ll n;
        scanf("%lld",&n);

        if(n==1) printf("0\n");
        else{
            int count=0;
            while(n>1 and n%6==0){
                count++;
                n/=6;
            }
            if(n==1) printf("%d\n",count);
            else{
                ll t = n;
                while(t%3==0){
                    t/=3;
                }
                if(t!=1) printf("-1\n");
                else{
                    while(n>1){
                        if(n%6==0){
                            count++;
                            n/=6;
                        }
                        else{
                            n*=2;
                            count++;
                        }
                    }
                    printf("%d\n",count);
                }
            }
        }
    }

    return 0;
}
