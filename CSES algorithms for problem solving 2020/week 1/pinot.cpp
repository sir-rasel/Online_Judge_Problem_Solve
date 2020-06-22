#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int a,b;
        scanf("%d %d",&a,&b);

        if(a<b) swap(a,b);
        if(a>2*b) printf("NO\n");
        else{
            a%=3,b%=3;
            if(a<b) swap(a,b);
            if((a==2 and b==1) or (a==b and a==0))
                printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}
