#include<bits/stdc++.h>
using namespace std;

int oneBit(int n){
    int ans=0;
    while(n){
        ans++;
        n/=2;
    }
    return ans;
}

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n;
        scanf("%d",&n);
        bitset<25>bit(n),B(0),Xor,And;
        int setBit=oneBit(n);
        if(bit.count()!=setBit){
            for(int i=0;i<setBit;++i){
                if(bit[i]==1) B[i]=0;
                else B[i]=1;
            }
            Xor = bit^B;
            And = bit&B;

            unsigned long xorValue = Xor.to_ulong();
            unsigned long andValue = And.to_ulong();

            printf("%lu\n",__gcd(xorValue,andValue));
        }
        else{
            int ans=1;
            int srt = sqrt(n)+1;
            for(int i=2;i<=srt;i++){
                if(n%i==0){
                    ans = max(ans,i);
                    ans = max(ans,n/i);
                }
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}
