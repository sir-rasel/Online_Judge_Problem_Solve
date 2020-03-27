#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a%b==0) printf("0\n");
        else {
            int ans = ceil(a*1.0/b)*b;
            printf("%d\n",ans-a);
        }
    }
    return 0;
}
