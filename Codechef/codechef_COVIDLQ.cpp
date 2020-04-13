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
        int curr = -6;
        bool flag=true;
        for(int i=0;i<n;i++){
            int status;
            scanf("%d",&status);
            if(status==1){
                if(i-curr<6) flag=false;
                curr = i;
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
