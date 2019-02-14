#include <cstdio>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);

        int up,down;
        scanf("%d %d",&up,&down);
        int diff=up-down;
        bool res = true;
        for(int i=0;i<n-1;i++){
            scanf("%d %d",&up,&down);
            if(diff!=up-down) res = false;
        }
        if(res) printf("yes\n");
        else printf("no\n");
        if(test) printf("\n");
    }
    return 0;
}
