#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        if(n<3) printf("Case %d: Tie\n",cs++);
        else if(n%2==0) printf("Case %d: CodeMask\n",cs++);
        else printf("Case %d: CodeNewtons\n",cs++);
    }
    return 0;
}
