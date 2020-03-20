#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        bool odd=false,even=false;
        for(int i=0;i<n;i++){
            int num;
            scanf("%d",&num);
            if(num%2==0) even = true;
            else odd = true;
        }
        if((odd and !even) or (!odd and even)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
