#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        map<int,int> coin;

        bool ans = true;
        for(int i=0;i<n;i++){
            int num;
            scanf("%d",&num);
            if(num == 5) coin[num]++;
            else if(num == 10){
                coin[num]++;
                if(coin[5]) coin[5]--;
                else ans = false;
            }
            else{
                coin[num]++;
                if(coin[10]) coin[10]--;
                else if(coin[5]>=2) coin[5]-=2;
                else ans = false;
            }
        }
        if(ans) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
