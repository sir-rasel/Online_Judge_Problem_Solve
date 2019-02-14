#include <cstdio>
using namespace std;

int main(){
    int b,n;
    while(scanf("%d %d",&b,&n) and (b and n)){
        int bank[b+5]={0};
        for(int i=0;i<b;i++) scanf("%d",&bank[i]);
        while(n--){
            int d,c,v;
            scanf("%d %d %d",&d,&c,&v);
            bank[d-1]-=v;
            bank[c-1]+=v;
        }

        bool res = true;
        for(int i=0;i<b;i++)
            if(bank[i]<0) res=false;

        if(res) printf("S\n");
        else printf("N\n");
    }
    return 0;
}
