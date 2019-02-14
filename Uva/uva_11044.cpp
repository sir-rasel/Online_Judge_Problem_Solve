#include <cstdio>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,m;
        scanf("%d %d",&n,&m);
        int ans = (n/3)*(m/3);
        printf("%d\n",ans);
    }
    return 0;
}
