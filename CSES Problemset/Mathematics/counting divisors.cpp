#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int nod(int n){
    int res = 1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            int count = 0;
            while(n%i==0){
                count++;
                n/=i;
            }
            res *= (count+1);
        }
    }
    if(n!=1) res*=2;
    return res;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        printf("%d\n",nod(n));
    }
    return 0;
}
